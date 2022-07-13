int ListDelete (StaticLinkList L, int i)
{
    int j, k;

    if(i < 1 || i > ListLength(L)){     //因为要求在第i个元素之前插入新的元素，所以i不能小于1或者超出静态链表的总长度
        return 0;
    }

    k = 1000 - 1;       //k指向最后一个元素（其中最后一个元素的游标指向第一个元素）

    for(j = 1; j <= i - 1; j++)
    {
        k = L[k].cur;       //执行第一次k等于1，执行第二次之后k等于当前元素对应的游标
    }

    j = L[k].cur;           //j就是执行最后一次循环后游标对应的元素下标
    L[k].cur = L[j].cur;        //把j对应的游标赋值给k对应的游标

    Free_SLL(L, j);         ////将下标为j的空闲结点回收到备用链表，就算j中还有数据但是被归到备用链表中成为垃圾数据

    return 1;
}

//将下标为j的空闲结点回收到备用链表
void Free_SLL (StaticLinkList space, int j)
{
    space[j].cur = space[0].cur;        //把下标为0的元素的游标给到j对应的游标
    space[0].cur = j;           //把j对应的下标给到下标为0的元素对应的游标
}

//返回L中数据元素的个数
int ListLength (StaticLinkList L)
{
    int j = 0;
    int i = L[1000 - 1].cur;

    while(i)
    {
        i = L[i].cur;       //指向下一个结点就是把它的游标赋值给它的下标
        j++;            //统计的数量加1
    }

    retuern j;
}