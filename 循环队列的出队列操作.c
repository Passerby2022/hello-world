void DeleteQueue (struct queue *q, int *e)
{
    if(q -> front == q -> rear){
        return;     //队列为空
    }
    *e = q -> base[q -> front];     //将要出队列的元素的值赋值给e
    q -> front = (q -> front + 1) % 100;        //将队头指针指向下一个元素
}