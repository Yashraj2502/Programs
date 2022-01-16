#include<stdio.h>
#include<stdlib.h>

int a[20], n;

int partition(int a[], int L, int R){
    int p, i, j, t;
    p = a[L];
    i = L;
    j = R;

    while (i < j)
    {
        while(a[i] <= p && i <= R)
            i++;
        while (a[j] > p)
            j--;
        if (i < j)
        {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    a[L] = a[j];
    a[j] = p;
    return(j);
}

void quickSort(int a[], int L, int R){
    int j;
    if(L < R){
        j = partition(a, L, R);
        quickSort(a, L, j-1);
        quickSort(a, j+1, R);
    }
}

int main(void){
    system("cls");
    printf("\nEnter size of A:- ");
    scanf("%d", &n);
    printf("\nEnter array elements:-\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nBefore Sorting:- \n");
    for (int i = 0; i < n; i++)
    {
        printf("    %d", a[i]);
    }
    quickSort(a, 0, n-1);
    printf("\nAfter Sorting:-\n");
    for (int i = 0; i < n; i++)
    {
        printf("    %d", a[i]);
    }
    
}