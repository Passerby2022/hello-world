struct sqStack
{
    int *base;
    int *top;
    int stackSize;
};

//下面的这个结构体和上面的结构体是一个意思
struct sqStack
{
    int data[100];
    int top;
    int stackSize;
};

void initStack(sqStack *s)
{
    s -> base = (struct sqStack*) malloc(sizeof(struct sqStack));

    if(!s){
        return 0;
    }

    s -> top = s -> base;       //最开始的时候栈顶为栈底
    s -> stackSize = 100;
}
