#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
    char data;
    struct node *LC;
    struct node *RC;
};
struct node *root, *n, *T;

void ins (struct node *T, struct node * n)
{   
    int ans;
    printf("\nWhere to insert? (Left - 0/Right - 1)?    ");
    scanf("%d", & ans);

    if (ans == 0)   //insertes in LST
    {
        if (T->LC == NULL)
            T->LC = n;
        else
            ins(T->LC, n);
        
    }
    
    if (ans == 1)   //inserted in RST (Right sub tree)
    {
        if(T->RC == NULL)
            T->RC = n;
        else
            ins(T->RC, n);
    }
    
}

void create(){
    int ans;
    //char n;
    do{
        n = (struct node *)malloc(sizeof(struct node));
        printf("\nData pls:- ");
        //scanf("%c", &n->data);
        n->data = getche();
        n->LC = n->RC = NULL;

        if (root == NULL)
            root = n;
        else
            ins(root, n);
    
        printf("\nContinue with creation (1 - YES, 0 - NO)?     ");
        scanf("%d", &ans);
    } while (ans == 1);
}

void in(struct node*T)
{
    //printf("\nInorder Traversal:\n");
    if(T != NULL)
    {
        in(T->LC);
        printf("    %c", T->data);
        in(T ->RC);
    }
}

void pre(struct node *T)
{
    //printf("\nPreOrder Traversal:\n");
    if(T != NULL)
    {
        printf("    %c", T->data);
        pre(T->LC);
        pre(T->RC);
    }
}

void post(struct node *T)
{
    //printf("\nPostOrder Traversal:\n");
    if(T != NULL)
    {
        post(T->LC);
        post(T->RC);
        printf("    %c", T->data);
    }
}

void main(){
    system("cls");

    int ch, ans;
    root = NULL;
    do{
        printf("\nMenu\n1.Creation\n2.InOrder\n3.PreOrder\n4.PostOrder\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create();
            break;

        case 2:
            printf("\nInorder Traversal:\n");
            in(root);
            break;

        case 3:
            printf("\nPreOrder Traversal:\n");
            pre(root);
            break;

        case 4:
            printf("\nPostOrder Traversal:\n");
            post(root);
            break;
    /*
        default:
            break;
    */
        }

        printf("\nContinue with main menu(1 - YES, 0 - NO)?     ");
        scanf("%d", &ans);
    } while (ans == 1);
}