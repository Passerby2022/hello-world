void create (struct QNode *q)
{
    q -> front = q -> rear = (struct QNode*) malloc(sizeof(struct QNode));
    if(!q -> front){
        exit(0);
    }
    q -> front > next = NULL;       //头结点的初始化是为空的
}