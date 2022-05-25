#include <stdio.h>
#include <stdlib.h>

struct student 
{
    int n;
    struct student *new;
};

int main (void)
{
    struct student *p;
    struct student *q;
    int a[1] = {10};
    p = q = (struct student*) malloc(sizeof(struct student));
    p -> n = 10;
    q -> new = NULL; 

    printf("%d\n", p->n);
    if(q -> new == NULL){
        printf("OK\n");
    }
    
    free(p);
    free(q);

    return 0;
}