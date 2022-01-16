//01_Yash Alapuria
//DSA, Exp7 - Queue

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *nxt;
};
struct node *F, *R, *n, *p;

void enQueue(){
    int x;
    printf("\nEnter element:- ");
    scanf("%d", &x);
    n = (struct node *)malloc(sizeof(struct node));
    n->data = x;
    n->nxt = NULL;
    if(F == NULL)
        F = R = n;
    else    
        R->nxt = n;
    R = n;
}

void deQueue(){
    int x;
    if(F == NULL){
        printf("Queue is UF.");
        return;
    }

    x = F->data;
    p = F;
    if(F == R)
        F = R = NULL;
    else
        F = F->nxt;

    printf("\nDeleted element:- %d", x);
    free(p);
}

void display(){
    if(F == NULL){
        printf("Queue is UF.");
        return;
    }
    printf("\nElement of queue are:- ");
    for (p = F; p != NULL; p = p->nxt)
    {
        printf(" %d", p->data);
    }
}

int main(void){
    system("cls");
    int ch, ans;
    F = R = NULL;

    do
    {
        printf("\nMenu:-\n1.EnQueue\n2.DeQueue\n3.Display");
        printf("\nChoice? ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            enQueue();
            break;
        
        case 2:
            deQueue();
            break;
        
        case 3:
            display();
            break;
        }

        printf("\nContinue?\n(1 = YES, 0 = NO) \t");
        scanf("%d", &ans);
    } while (ans == 1);  
    
}