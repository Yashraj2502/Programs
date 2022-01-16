//Yash Alapuria
//Roll no.:- 01

#include<stdio.h>
#include<stdlib.h>
#define max 2

int Q[max], F, R;

void EnQue()
{
    int x;
    printf("Enter Element\n");
    scanf("%d", &x);

    if (R == max - 1)
    {
        printf("\nQueue is overflow\n");
        return;
    }
    if (F == -1)
    {
        F++;
    }

    R++;
    Q[R] = x;

}

void DeQue()
{
    int x;

    if (F == -1)
    {
        printf("\nQueue is underflow\n");
        return;
    }

    x = Q[F];

    if (F == R)
    {
        F = R = -1;
    }

    else
    {
        F++;
    }

    printf("\nDeleted element is %d\n", x);

}

void DisplayQ()
{
    int i;
    
    if (F == -1)
    {
        printf("\nQueue is underflow.\n");
        return;
    }
    
    printf("\nQueue Elements are:- ");
    for ( i = F; i <= R; i++)
    {
        printf("\nQ[%d] = %d", i, Q[i]);
    }
    printf("\n");
    
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
            EnQue();
            break;
        
        case 2:
            DeQue();
            break;

        case 3:
            DisplayQ();
            break;

        default:
            break;
        }

        printf("Continue?\n1 - Yes\t0 - No\n");
        scanf("%d", &ans);
    } while (ans == 1);
    
}