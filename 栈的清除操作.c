void ClearStack (struct sqStack *s)
{
    s -> top = s -> base;       //栈顶和栈底的指针重合了说明是空栈
                                //但原来存在栈中的数据还是存在的，只是我们看不到了
                                //指针不指向它们说明它们是作废的
}