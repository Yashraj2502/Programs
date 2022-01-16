//01_Yash Alapuria
//DSA, Experiment - 5

#include<stdio.h>
#include<stdlib.h>

int G[20][20], n, visit[20], st[20], top;

void readGraphAM(){
    printf("\nEnter no. of vertices in graph:-\t");
    scanf("%d", &n);
    printf("\nEnter adjency matrix of graph:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &G[i][j]);
        }
        
    }
    
}

void DFS(int v){
    for (int i = 0; i < n; i++)
    {
        visit[i] = 0;
    }
    
    do
    {
        if (visit [v] == 0)
        {
            printf("v%d ", v);
            visit[v] = 1;
        }
        for (int j = 0; j < n; j++)
        {
            if (G[v][j] == 1 && visit[j] == 0)
            {
                st[++top] = j;
            }
            
        }
        v = st[top--];
    } while (top != -1);
    
}

int main(void){
    system("cls");
    top = -1;
    readGraphAM();
    DFS(0);
}