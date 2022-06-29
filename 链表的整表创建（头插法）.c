void CreateListHead (struct LinkList *L, int n)
{
    struct LinkList *p;
    int i;

    srand(time(0));     //为后面的随机数做准备，srand设置产生一系列伪随机数产生器的起始点

    *L = (struct LinKList *) malloc (sizeof(struct LinKList));       //初始化随机数种子,声明这个L指针指向结点

    (*L) -> next = NULL;       //初始化

    for(i = 0; i < n; i++)
    {
        p = (struct LinKList *) malloc (sizeof(struct LinKList));       //生成新结点
        p -> data = read() % 100 + 1;          //rand函数每次计算工作表时都返回一个新的随机实数
                                                //返回的随机数是大于0小于1的均匀非陪随机实数
                                                //rand函数每次计算工作表时都返回一个新的随机实数
                                                //如果想得到两位数就%100如果想得到三位数就%1000
        p -> next = (*L) -> next;                  //把L -> next赋值给p -> next,把表头的数据嘱托给了p—>next,头插法的表头指针指向为空
        (*L) -> next = p;       //把p存放的数据存储到链表的结点中,实现插入表头的位置
    }
}