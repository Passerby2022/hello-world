#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *CreateLinkList()
{
    struct node *head = NULL;
    struct node *s;
    struct node *r;
    int i;

    r = head;

    for(i = 1; i <= 13; i++)
    {
        s = (struct node *) malloc(sizeof(struct node));
        s -> data = 0;          //初始化所有数据都为0，表示还没有给他存放任何内容，没有给他存进发牌的顺序

        if(head == NULL){
            head = s;
        }else{
            r -> next = s;
        }

        r = s;
    }

    r -> next = head;           //尾指针指向了头结点，生成了一个单循环链表

    return head;
}

//发牌顺序计算
struct node * Magician (struct node *head)
{
    struct node *p;
    int j;
    int Countnumber = 2;        //每一次需要存放的牌的顺序的数字，从花色2的牌开始分配位置

    p = head;
    p -> data = 1;          //第一张牌放1，定位好第一张花色1的牌的位置

    while(1)        
    {
        for(j = 0; j < Countnumber; j++)        //从第二张牌开始定位
        {
            p = p -> next;      //指向下一个结点
            if(p -> data != 0){         //该位置有牌的话，则下一个位置
                p -> next;
                j--;                    //数的次数减去1
            }
        }

        if(p -> data == 0)      //如果这个位置没牌
        {
            p -> data = Countnumber;        //那么就放入该花色的牌
            Countnumber++;                  //牌的大小加1

            if(Countnumber == 14){      //牌分配完了就退出循环
                break;
            }
        }
    }

    return head;
}

//销毁工作，可有可无，程序结束的时候会自动销毁
//一个一个抽出来销毁
void DeatoryList (struct node *list)
{
    struct node *ptr = list;
    struct node *buff[13];
    int i = 0;

    while(i < 13)
    {
        buff[i++] = ptr;
        ptr = ptr -> next;
    }

    for(i = 0; i < 13; i++)
    {
        free(buff[i]);
    }

    list = 0;
}

int main (void)
{
    struct node *p;
    struct node *temp;
    int i;

    temp = CreateLinkList();
    p = Magician(temp);

    printf("按如下顺序排序:\n");
    for(i = 0; i < 13; i++)
    {
        printf("黑桃%d", p -> data);
        p = p -> next;
    }

    DeatoryList(p);

    return 0;
}