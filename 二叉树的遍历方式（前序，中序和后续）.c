#include <stdio.h>
#include <stdlib.h>

struct BiTNode
{
    char data;      //存放数据
    struct BiTNode *lchild;     //前驱结点
    struct BiTNode *rchild;     //后继结点
};

//创建一棵二叉树，约定用户遵循前序遍历的方式输入数据
//**T是指向指针的指针，*T是指针，T就是地址
void CreateBiTree (struct BiTNode **T)
{
    char c;
    
    scanf("%c", &c);
    if(c == ' '){       //输入的是空格的时候
        *T = NULL;      //也相当于递归的退出条件
    }else{
        *T = (struct BiTNode*) malloc(sizeof(struct BiTNode));
        (*T) -> data = c;
        //先左后右
        CreateBiTree(&(*T) -> lchild);      //递归左子树建立结点
        CreateBiTree(&(*T) -> rchild);      //递归右子树建立结点
    }
}

//访问二叉树结点的具体操作
void visit (char c, int level)
{
    printf("%c 位于第 %d 层\n" , c, level);
}

//前序遍历二叉树
void PreOrderTraber (struct BiTNode *T, int level)
{
    if(T){
        visit(T -> data, level);        //visit对结点做什么，调用函数visit的时候会显示出来
        PreOrderTraber(T -> lchild, level + 1);     //遍历左子树，层数加1
        PreOrderTraber(T -> rchild, level + 1);     //遍历右子树，层数加1

        //中序遍历
        /*
        PreOrderTraber(T -> lchild, level + 1);     //遍历左子树，层数加1
        visit(T -> data, level);        //visit对结点做什么
        PreOrderTraber(T -> rchild, level + 1);     //遍历右子树，层数加1
        */

        //后序遍历
        /*
        PreOrderTraber(T -> lchild, level + 1);     //遍历左子树，层数加1
        PreOrderTraber(T -> rchild, level + 1);     //遍历右子树，层数加1
        visit(T -> data, level);        //visit对结点做什么
        */
    }
}

int main (void)
{
    int level = 1;      //记录层数
    struct BiTNode *T = NULL;

    CreateBiTree(&T);       //初始化二叉树
    PreOrderTraber(T, level);       //遍历二叉树

    return 0;
}