//01_Yash Alapuria
//DSA 

#include<stdio.h>
#include<stdlib.h>

int G[20][20], n, visit[20], Q[20], F, R;

void readGraphAM(){
    printf("Enter no. of vertices in graph.\n");
    scanf("%d", &n);
    printf("\nEnter adjacent matrix of graph.\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &G[i][j]);
        }
    }
}

void BFS(int v){
    for (int i = 0; i < n; i++)
    {
        if (G[v][i] != 0 && visit[i] == 0)
        {
            Q[++R] = i;
            visit[i] = 1;
            printf("v%d ", i);
        }
        
    }
    F++;
    if (F <= R)
        BFS(Q[F]);   
}

int main(void){
    system("cls");
    F = R = -1;
    readGraphAM();
    F = R = 0;
    Q[R] = 0;
    printf("\nBFS traversal is: \n");
    visit[0] = 1;
    printf("v0 ");
    BFS(0);
}