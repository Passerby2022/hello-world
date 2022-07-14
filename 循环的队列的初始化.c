void innitQueue (struct queie *q)
{
    q -> base = (int *) malloc(sizeof(int) * 100);      //为基地址分配内存空间
    if(!q -> base){
        exit(0);
    }
    q -> front = q -> rear = 0;     //队列的队头和队尾指针指向空
}