int GetElem (SqList L, int i, int *e)
{
    //线性表的元素表面上以下标i+的形式表现出来即i = i + 1，元素下标是从0开始的，元素的显示为了更符合习惯就从1开始
    if(L.length == 0 || i < 1 || i > L.length){    //当线性表的长度为0时，当线性表的元素小于1时，当元素多于线性表的长度时
        return 0;
    }
    *e = L.data[i - 1]      //i - 1表示线性表的第一个元素的下标

    return 1;
}