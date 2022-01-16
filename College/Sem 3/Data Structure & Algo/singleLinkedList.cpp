//01_Yash Alapuria
//DSA

#include<stdio.h>
#include<stdlib.h>
#define pf printf
#define sf scanf

struct node
{
    int data;
    struct node *nxt;
};

struct node *start, *p, *n, *q;

void create(){
    int ans;
    do
    {
        n = (struct node*)malloc(sizeof(struct node));
        pf("\nElement please:-\n");
        sf("%d", & n->data);
        n -> nxt = NULL;

        if (start == NULL)
        {
            start = n;
        }
        else
        {
            for (p = start; p->nxt != NULL; p = p -> nxt)
            {
                ;
            }
            
            p->nxt = n;
        }
        
        pf("Continue creation?\n(1 - YES/ 0 - NO)");
        sf("%d", &ans);
    } while (ans == 1);
}

void display(){
    if (start == NULL)
    {
        pf("\nSLL is empty.");
    }
    
    pf("\nSLL is :- ");
    for (p = start; p != NULL; p = p->nxt)
    {
        pf("\t%d", p->data);
    }
    
}

void insertBeginning(){
    n = (struct node*)malloc(sizeof(struct node));
    pf("Data pls.\n");
    sf("%d", & n->data);
    n->nxt = start;
    start = n;
}

void insertEnd(){
    n = (struct node*)malloc(sizeof(struct node));
    pf("Data pls.\n");
    sf("%d", &n->data);
    n->nxt = NULL;

    for (p = start; p->nxt != NULL; p =p->nxt)
    {
        ;
    }
    
    p->nxt = n;
}

void insertBetween(){
    int loc;
    n = (struct node*)malloc(sizeof(struct node));
    pf("Data pls.\n");
    sf("%d", & n->data);
    pf("Location pls.\n");
    sf("%d", &loc);
    p = start;

    for (int i = 0; i < loc - 2; i++)
    {
        p = p->nxt;
    }
    
    n->nxt = p->nxt;
    p->nxt = n;
}

void deleteBeginning(){
    if (start == NULL)
    {
        pf("LL is empty\n");
        return;
    }
    pf("Deleted element is %d", start->data);
    p = start;
    start = start ->nxt;
    free(p);
}

void deleteEnd(){
    if (start == NULL)
    {
        pf("SLL is empty.\n");
        return;
    }
    p = start;
    q = start -> nxt;
    while (q->nxt != NULL)
    {
        p = p->nxt;
        q = q->nxt;
    }
    pf("Deleted element is %d", q->data);
    p->nxt = NULL;
    free(q);
}

void deleteBetween(){
    int loc;
    if (start == NULL)
    {
        pf("SLL is empty.\n");
        return;
    }
    pf("Location is? ");
    sf("%d", &loc);
    p = start;
    q = start->nxt;
    for (int i = 0; i < loc-2; i++)
    {
        p = p->nxt;
        q = q->nxt;
    }
    p->nxt = q->nxt;
    pf("Deleted element is %d", q->data);
    free(q);
}

int main(void){
    system("cls");
    int ch, ans;
    start = NULL;

    do
    {
        pf("Menu:-\n1.Create\n2.Display\n3.Insert from beginning\n4.Insert from end\n5.Insert in between");
        pf("\n6.Delete from front\n7.Delete from end\n8.Delete from middle");
        pf("\n\nChoice please? ");
        sf("%d", &ch);

        switch (ch)
        {
        case 1:
            create();
            break;
        
        case 2:
            display();
            break;

        case 3:
            insertBeginning();
            break;

        case 4:
            insertEnd();
            break;

        case 5:
            insertBetween();
            break;

        case 6:
            deleteBeginning();
            break;

        case 7:
            deleteEnd();
            break;

        case 8:
            deleteBetween();
            break;

        default:
            break;
        }

        
        pf("Continue creation?\n(1 - YES/ 0 - NO)");
        sf("%d", &ans);
    } while (ans == 1);
    
}