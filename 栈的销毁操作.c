void DestroyStack (struct sqStack *s)
{
    int i, len;
    len = s -> stackSize;
    for(i = 0; i < len; i++)
    {
        free(s -> base);        //从栈底开始释放内存
        s -> base++;            //栈底指针向上索引
    }
    s -> base = s -> top = NULL;        //最后栈底和栈顶处于同一个位置，栈的内存已经释放完成为空栈
    s -> sizeStack = 0;         //栈的当前内存大小为0
}