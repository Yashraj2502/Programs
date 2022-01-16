#include<stdio.h>
#include<stdlib.h>
#define max 2

int CQ[max], F, R;

void EnCQue()
{
    int x;
    printf("Enter Element\n");
    scanf("%d", &x);

    if ((R + 1)%max == F)
    {
        printf("\nQueue is overflow\n");
        return;
    }
    else if (F == -1)
    {
        F = (F + 1) % max;
    }

    R = (R + 1) % max;
    CQ[R] = x;
    
}

void DeCQue()
{
    int x;

    if (F == -1)
    {
        printf("\nQueue is underflow\n");
        return;
    }

    x = CQ[F];

    if (F == R)
    {
        F = R = -1;
    }

    else
    {
        F = (F + 1) % max;
    }

    printf("\nDeleted element is %d", x);

}

void DisplayCQ()
{
    int i;
    
    if (F == -1)
    {
        printf("\nQueue is underflow.\n");
        return;
    }
    
    printf("\nQueue Elements are:- ");
    for ( i = F; i != R; i = (i + 1) % max)
    {
        printf("\nQ[%d] = %d", i, CQ[i]);
    }
    printf("\n");
    printf("CQ[%d] = %d\n", R, CQ[R]);
}

void main()
{
    system("cls");
    int ch, ans;

    F = R = -1;
    do
    {
        printf("Menu:-\n1. Enqueue\n2. DeQueue\n3. Display");
        printf("\nChoice:-\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            EnCQue();
            break;
        
        case 2:
            DeCQue();
            break;

        case 3:
            DisplayCQ();
            break;

        default:
            break;
        }
    } while (ans == 0);
    
}