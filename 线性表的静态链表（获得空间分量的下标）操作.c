int Malloc_SLL (StaticLinkList space)
{
    int i = space[0].cur;       //如果不是空链表，就把第0个元素对应的游标给i
    if(space[0].cur){
        space[0].cur = space[i].cur;        //把最后一个元素的下标对应的有表达地址给第一个元素的游标
        //把它的下一个分量用来作为备用
    }
    return i;
}