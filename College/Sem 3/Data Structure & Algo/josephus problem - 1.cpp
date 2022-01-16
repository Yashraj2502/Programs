//01_Yash Alapuria
//DSA, Experiment - 09
//C Program to Solve Josephus Problem using cIRCULAR Linked List

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *nxt;
};
struct node *start,*p,*q,*n,*l;

void create ()
{
    int a, ch;
    do{
        n = (struct node *)malloc(sizeof(struct node));
        printf("Enter a number: ");
        scanf("%d", &n->num);
        n->nxt = NULL;
        if (start == NULL)
            start = n;
        else
            l->nxt = n;
        l= n;
        printf("Do you want to add a number [1/0]? ");
        scanf("%d", &ch);
    } while (ch != 0);
    l->nxt = start;
}

void display()
{
    for(p=start;p->nxt!=start;p=p->nxt)
        printf("%d ", p->num);
        printf("%d ", p->num);
        printf("\n");
}

int survivor(int k)
{
    int i;
    p=q = start;
    while (q->nxt != q){
        for (i = 0; i < k - 1; i++){
            p = q;
            q = q->nxt;
        }
        p->nxt = q->nxt;
        printf("%d has been killed.\n", q->num);
        free(q);
        q = p->nxt;
    }
    start= q;
    return (q->num);
}

int main(void)
{
    system("cls");
    int survive, skip;
    start=NULL;
    create();
    printf("The persons in circular list are:\n");
    display();
    printf("Enter the number of persons to be skipped: ");
    scanf("%d", &skip);
    survive = survivor(skip);
    printf("The person to survive is : %d\n", survive);
    free(start);
}
