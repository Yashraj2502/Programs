/*Implementation of Menu Driven program for Stack using Array
Name - Yash Alapuria
Roll no.:- 01*/
#include<stdio.h>
#include<stdlib.h>
#define max 2

int stack[max], top;

void push(int x)
{
    if (top == max-1)
    {
        printf("Stack is off");
        return;
    }

    stack[++top] = x;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack is underflow");
        return-1;
    }
    
    return(stack[top--]);
}

void display()
{
    if (top == -1)
    {
        printf("Stack is underflow");
        return;
    }

    printf("Stack element:-\n");
    for (int i = top; i > -1; i--)
    {
        printf("STACK[%d} = %d\n", i, stack[i]);
    }
}

void main()
{
    system("cls");
    int ch, ans, x;
    top = -1;

    do
    {
        printf("Menu:-\n1. Push\n2. Pop\n3. Display\n4. Exit");
        printf("\n\nEnter choice:-\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Elements please:-\n");
            scanf("%d", &x);
            push(x);
            break;

        case 2:
            printf("Popped Element:- %d", pop());
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);
            break;

        default:
            break;
        }

        printf("\nContinue with main menu?\n1 - YES\n0 - NO\n");
        scanf("%d", &ans);
        printf("\n\n");
    } while (ans == 1);
    
}