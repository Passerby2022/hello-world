void insert (struct QNode *q, struct QNode e)       //q相当于头指针
{
    struct QNode *p;         //新结点
    p = (struct QNode*) malloc(sizeof(struct QNode));       //为新结点分配内存空间
    if(p == NULL){      //分配失败
        exit(0);
    }
    p -> data = e;      //存入数据到新结点的数据域
    p -> next = NULL;       //新结点的指针域指向为空
    q -> rear -> next = p;      //旧结点的指针域指向新结点
    q -> rear = p;              //头指针指向新结点
}