//定义一个孩子结点
struct CTNode
{
    int child;      //孩子结点的下标
    struct CTNode *next;        //指向下一个孩子结点的指针
}

//表头结构
struct CTBox
{
    char data;      //存放在树中的结点的数据
    int parent;     //存放双亲的下标
    struct CTNode *firstchild;      //指向孩子结点的头指针，即指向第一个孩子的指针
}

//树结构，把前面两个串起来
struct 
{
    struct CTBox nodes[100];        //表头结构的数组
    int r, n;       //r表示根的位置，n表示结点数
}