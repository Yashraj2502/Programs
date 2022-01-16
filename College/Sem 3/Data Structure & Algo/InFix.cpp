#include<stdio.h>
#include<stdlib.h>
#define pf printf
#define sf scanf

char st[20];
int top;

void push(char x)
{
   st[++top]=x;
}

char pop()
{
  return(st[top--]);
}

int main(void)
{
	system("cls");
 	int i,j; char Q[20],P[20];
	char ch;
 	top=-1;
 	j=0;
 	printf("Enter Infix expression:-\n");
 	scanf("%s", Q);

 	for(i = 0; Q[i] != '\0'; i++){
		
   		pf("\n%c",Q[i]);
  		switch(Q[i])
  		{
   			case '(':
			   	push('('); 
				pf("  Pushing ( ");
	      		break;

   			case  ')':
			    pf("  Popping & adding to P till ( ");
            	do{
	        		ch=pop();
	        		if(ch=='(')
	        		break;
	        		P[j++]=ch;
	       		}while(1);
	       		break;

   			case '+':

   			case '-': 
			   	pf("  Popping higher or equal precedance operator,if any");
	       		do{
	       			ch=pop();
	       			if(ch=='*'||ch=='/'||ch=='+'||ch=='-'||ch=='^')
	        			P[j++]=ch;
	       			else{
	        			push(ch);
	        			break;
	       			}
	      		}while(1);
	      		pf("  Pushing current operator ");
				push(Q[i]);
     	     	break;

   			case '*':

   			case '/':
			   	pf("  Popping higher or equal precedance operator,if any");
	       		do{
	       			ch=pop();
	       			if(ch=='*'||ch=='/'||ch=='^')
	        			P[j++]=ch;
	       			else{
	        			push(ch);
	        			break;
	       			}
	      		}while(1);
	      		pf("  Pushing current operator ");
				push(Q[i]);
	      		break;

   			case '^':
   				pf("  Popping higher or equal precedance operator,if any");
            	do{	
	       			ch=pop();
	       			if(ch=='^')
	        			P[j++]=ch;
	       			else{
	        			push(ch);
	        			break;
	       			}
	      		}while(1);
	       		pf("  Pushing current operator ");
				push(Q[i]);
	       		break;

   			default:
				pf("  Adding current operand/symbol ");P[j++]=Q[i]; 
  		}
 	}
	 
  	while(top!=-1)
  		{
  		P[j++]=pop();
  	}
  	P[j]='\0';
  	printf("\nPostfix expression is %s",P);
}