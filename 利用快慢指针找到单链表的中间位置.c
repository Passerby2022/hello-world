int GetMidNode (LinkList L, int *e)
{
    LinkList search, mid;       //LinkList是结构体类型，其中search和mid是两个结构体指针
    mid = search = L;           //让两个指针都指向单链表的头结点

    while(search -> next != NULL)       //以快指针search为主
    {
        if(search -> next -> next != NULL){
            search = search -> next -> next;        //search速度是mid的两倍
            mid = mid -> next;
        }else{
            search = search -> next;
        }
    }

    *e = mid -> data;

    return 1;
}