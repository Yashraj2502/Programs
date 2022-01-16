#include<stdio.h>
#include<stdlib.h>

void display()
{

}
/*
#include<stdio.h>
#include<stdlib.h>
#define pf printf
#define sf scanf
struct node
{
	int data;
	struct node *nxt;
};
struct node *start,*p, *n;

void create()
{
	int ans;
do{
	n=(struct node*)malloc(sizeof(struct node));
	pf("\nEle pls"); sf("%d",&n->data);
	n->nxt=NULL;
	if(start==NULL) 
	   	{
			start=n;
		}
	else
	{ 
    	for(p=start;p->nxt!=NULL;p=p->nxt)
	       {;}
	    p->nxt=n;
	}
	pf("\nContinue Creation(0-y/1-n");  sf("%d",&ans);
	}while(ans==0);
}

void disp()
{
	if(start==NULL)
	   	{ 
		   pf("\nSLL is empty"); return;
		}
	pf("\nSLL is");
	for(p=start;p!=NULL;p=p->nxt)
	   pf("\t%d",p->data);
}

void main()
{ 
	int ch,ans;
	start=NULL;
	do{
	pf("\nMenu\n\t1. Create \n\t2. Disp ");
	pf("\nChoice pls"); sf("%d",&ch);
	switch(ch)
	{
		case 1: create(); break;
		case 2: disp(); break;
	}
	pf("\n Continue with Main Menu(y-0/n-1)");
	sf("%d",&ans);
}while(ans==0);
	}

	4565
*/