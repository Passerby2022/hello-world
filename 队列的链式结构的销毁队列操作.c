void Delete (struct QNode *q)
{
    while(q -> front)
    {
        q -> rear = q -> front -> next;     //让队尾指针指向头结点之后的结点，此时当原来的头结点释放完成之后，将变成新的头结点
        free(q -> front);       //释放头结点
        q -> front = q -> rear;     //让队头指向当前队尾指向的结点
    }
}