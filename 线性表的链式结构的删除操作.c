int ListDelete (struct Linklist *L, int i, int *e)
{
    int j;
    struct Linklist *p;      //让p指向链表L
    struct Linklist *q;     //q为要删除的结点

    p = L;      //让p指向链表L
    j = 1;

    while(p -> next && j < i)       //p的下一个结点不为0，找到要删除的位置
    {
        p = p -> next;
        ++j;
    }

    if(!(p -> next) || j < i)        //p的下一个结点为空，找不到要删除的位置
    {
        return 0;
    }
    
    q = p -> next;          //q指向p的下一个结点
    p -> next = q -> next;          //p指向q的下一个结点，即p指向p的下一个结点的下一个结点

    *e = q -> data;             //把要删除的数据赋值给e
    free(q);                    //删除结点q

    return 1;
}