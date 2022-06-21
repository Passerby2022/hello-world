struct QNode        //定义链表的结构
{
    int *data;
    struct QNode *next;
};

struct LinkQueue        //队列的结构
{
    struct QNode *front;        //队头
    struct QNode *rear;         //队尾
};