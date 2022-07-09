#include <stdio.h>
#include <stdlib.h>

//线索存储标志位
//Link(0)，表示指向左右孩子的指针
//Thread(1)，表示指向前驱后继的线索
enum PointerTag{Link, Thread};
//或者这样声明枚举类型  typedef enum {Link, Thread}PointerTag;

struct BiThrNode
{
    char data;
    struct BiThrNode *lchild;
    struct BiThrNode *rchild;
    //枚举类型
    enum PointerTag ltag;
    enum PointerTag rtag;
};

//全局变量，始终指向刚刚访问过的结点
struct BiThrNode *pre;

//前序遍历创建一棵二叉树，约定用户遵照前序遍历的方式输入数据
void CreateBiThrTree (struct BiThrNode **T)
{
    char c;

    scanf("%c", &c);
    if(' ' == c){
        *T = NULL;
    }else{
        *T = (struct BiThrNode *) malloc(sizeof(struct BiThrNode));
        (*T) -> data = c;
        (*T) -> ltag = Link;        //先初始化该结点存在左子树
        (*T) -> rtag = Link;        //先初始化该结点存在右子树
        CreateBiThrTree(&(*T) -> lchild);       //递归创建左子树
        CreateBiThrTree(&(*T) -> rchild);       //递归创建右子树
    }
}

//中序遍历线索化的方式
void InTreading (struct BiThrNode *T)
{
    if(T){      //判断是不是空树
        InTreading(T -> lchild);        //递归左孩子线索化，直接去到左子树的最后一个孩子
        //结点处理
        if(!T -> lchild){       //如果该结点没有左孩子，即该结点的左子树为空的话
            T -> ltag = Thread;     //设置ltag为Thread
            T -> lchild = pre;      //并且把lchild(前驱)指向刚刚访问的结点，如果是第一遍的递归那么就相当于指向了头指针
        }

        if(!pre -> rchild){     //如果该结点没有右孩子，即该结点的右子树为空的话
            pre -> rtag = Thread;     //设置ltag为Thread
            pre -> rchild = T;      //并且把rchild(后继)指向刚刚访问的结点
        }

        pre = T;        //把当前结点T给上一个结点

        InTreading(T -> rchild);        //递归右孩子线索化
    }
}

//用一个头指针p来指向根结点作为pre最初的初始化 
void InOrderThread (struct BiThrNode **p, struct BiThrNode *T)
{
    *p = (struct BiThrNode *) malloc(sizeof(struct BiThrNode));
    (*p) -> ltag = Link;        //左子树指向根结点
    (*p) -> rtag = Thread;      //右子树作为一个线索
    (*p) -> rchild = *p;        //后继指向头指针

    if(!T){     //如果二叉树是一棵空树的话
        (*p) -> lchild = *p;        //头指针的前驱就指向自己
    }else{      //如果二叉树不为一棵空树的话
        (*p) -> lchild = T;         //头指针的左子树就指向根结点
        pre = *p;       //pre就初始化成为头指针
        InTreading(T);      //开始中序遍历
        pre -> rchild = *p;
        pre -> rtag = Thread;
        (*p) -> rchild = pre;
    }
}

int main (void)
{
    struct BiThrNode *T = NULL;
    struct BiThrNode *p;

    CreateBiThrTree(&T);        //通过前序遍历创建二叉树

    InOrderThread(&p, T);       //中序遍历二叉树

    return 0;
}