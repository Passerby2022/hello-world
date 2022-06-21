struct queue
{
    int *base;       //用于存放内存分配基地址，也可以用数组存放
    int front;
    int rear;
}