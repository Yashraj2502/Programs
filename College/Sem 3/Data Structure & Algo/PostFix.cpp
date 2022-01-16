//01_Yash Alapuria
//DSA, experiment - 8

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char st[20][20], Q[20], P[20];
int top, n1, n2, result;

int checkf(char X[20]){
    int opc = 0;
    int oprc = 0;
    for (int i = 0; X[i] != '\0'; i++)
    {
        switch (X[i])
        {
        case '+':
            
        case '-':

        case '/':

        case '*':

        case '^':
            oprc++;
            break;
        
        default:
            opc++;
        }
    }

    if(opc - oprc == 1)
        return(1);
    else
        return(0);
}

void push(char X[20]){
    strcpy(st[++top], X);
}

char* pop(){
    return(st[top--]);
}

int main()
{
    system("cls");
    char P[20], temp[20], oprstr[20];
    char A[20], B[20];
    int chk;
    top = -1;
    printf("Enter postfix expression.\n");
    scanf("%s", P);
    chk = checkf(P);

    if (chk == 0)
    {
        printf("Invalid Expression");
        return(0);
    }
    
    for (int i = 0; P[i] != '\0'; i++)
    {
        switch (P[i])
        {
        case '+':
            
        case '-':

        case '*':

        case '/':

        case '^':
            printf("\n%c", P[i]);
            printf("Popping & storing into A, B & forming (BoprA)");
            strcpy(A, pop());
            strcpy(B, pop());
            n1 = atoi(A);   //Convert string into numbers.
            n2 = atoi(B);
            switch (P[i])
            {
            case '+':
                result = n2 + n1;
                break;
            
            case '-':
                result = n2 - n1;
                break;

            case '*':
                result = n2 * n1;
                break;

            case '/':
                result = n2 / n1;
                break;

            case '^':
                result = n2 ^ n1;
                break;
            }
            itoa(result, temp, 10); //Convert number into string
            push(temp);
            break;
            

        default:
            temp[0] = P[i]; //Construct string from single alphabet
            temp[1] = '\0';
            push(temp);
        }
    }
    printf("\nEvaluated %s", st[top]);
}