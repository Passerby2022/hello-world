struct Linklist
{
    int data;
    struct Linklist *next;
};

int GetElem (struct Linklist *L, int i, int *e)
{
    int j;
    struct Linklist *p;

    p = L -> next;          //头结点之后的第一个结点
    j = 1;

    while(p && j < i)       //逐个向后查找直到i位置，p不为0
    {
        p = p -> next;
        ++j;
    }

    if(!p || j >= i){      //p为0，找不到要插入的位置
        return 0;
    }

    *e = p -> next;     //把i的位置给e

    return 1;
}