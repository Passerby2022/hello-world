void CreateListTail (struct Linklist *L, int n)
{
    struct Linklist *p;
    struct Linklist *x;

    srand(time(0));
    *L = (struct Linklist *) malloc (sizeof(struct Linklist *));
    x = *L;     //相当于头指针

    for(i = 0; i < n; i++)
    {
        p = (struct Linklist *) malloc (sizeof(struct Linklist));
        p -> data = rand() % 100 + 1;
        x -> next = p;      //把p赋值给x的指针
        x = p;              //相当于头指针指向p
    }

    x -> next = NULL;           //链表的结尾的指针指向为空       
}