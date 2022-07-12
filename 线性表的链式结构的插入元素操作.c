int ListInsert (struct Linklist *L, int i, int e)
{
    int j;
    struct Linklist *p;      //让p指向链表L
    struct Linklist *a;     //a为要插入的结点

    p = L;      //让p指向链表L
    j = 1;

    while(p && j < i)       //p不为0，找到要插入的位置
    {
        p = p -> next;
        j++;
    }

    if(!p || j > i){        //p为空，找不到要插入的位置
        return 0;
    }

    a = (struct Linklist *) malloc (sizeof(struct Linklist));       //为a分配内存空间
    a -> data = e;      //把e存入a中

    a -> next = p -> next;      //插入的结点指向当前结点的后一个结点
    p -> next = a;              //让当前结点指向插入的结点

    return 1;
}