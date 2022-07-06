struct PTNode
{
    int data;       //结点数据
    int narent;      //双亲位置
}

struct  PTree
{
    PTNode nodes[MAX_TREE_SIZE];
    int r;      //根的位置
    int n;      //结点数目
}