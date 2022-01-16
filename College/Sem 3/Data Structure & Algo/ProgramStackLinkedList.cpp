//01_Yash Alapuria
//DSA, Exp7 - Stack

#include<stdio.h>
#include<stdlib.h>
#define pf printf
#define sf scanf

struct node
{
    int data;
    struct node *nxt;
};

struct node *top, *n, *p;

void push(int x){
    n = (struct node*)malloc(sizeof(struct node));
    n->data = x;
    if (top == NULL)
        n->nxt = NULL;
    else
        n->nxt = top;

    top = n;
}

int pop(){
    int x;
    if (top == NULL)
    {
        printf("Stack is UF.");
        return -1;
    }
    x = top->data;
    p = top;
    top = top->nxt;
    free(p);
    return (x);
}

void display(){
    if (top == NULL)
    {
        printf("stack is UF");
        return;
    }
    printf("Stack elements:-\n");
    for (p = top; p != NULL; p = p->nxt)
    {
        printf(" %d", p->data);
    }
}

int main(void){
    system("cls");
    int ch, ans, x;
    top = NULL;

    do
    {
        printf("\nMenu:-\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\nEnter choice. ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\nElements pls. ");
            scanf("%d", &x);
            push(x);
            break;
        
        case 2:
            printf("\nPopped element:- %d", pop());
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);
        }

        printf("\nContinue with main menu?\n(1 = YES, 0 = NO)   ");
        scanf("%d", &ans);
    } while (ans == 1);
}