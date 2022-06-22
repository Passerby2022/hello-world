void push (struct QNode *q, int *e)
{
    struct QNode *p;
    if(q -> front == q -> rear){         //队列为空的时候
        return;
    }
    p = q -> front -> next;     //p指向头结点之后的结点,用中间值p得到要删除结点的位置
    *e = p -> data;     //e得到头结点之后的结点的数据域的数据
    q -> front -> next = p -> next;     //p的指针域的指向q结点的下一个结点
    if(q -> rear = p){      //如果队尾指针等于结点p的时候，即队列中只有一个结点的时候，队头和队尾都指向仅有的这个结点
        q -> rear = q -> front;     //即队头和队尾指向的是同一个结点
    }
    free(p);        //释放要删除结点的内存
}