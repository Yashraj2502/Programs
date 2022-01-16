#include<stdio.h>
#include<stdlib.h>

int a[20], n, key;

int BSM(int low, int high){
    int mid;

    while (low <= high)
    {
        mid = (low + high)/2;
        if(key == a[mid])
            return(mid);
        if(key < a[mid])
            high = mid - 1;
        else    
            low = mid + 1;    
    }
    return(-1);
}

void main(){
    system("cls");
    printf("Size of A?\n");
    scanf("%d", &n);
    printf("\nEnter Sorted List:-\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nKey element pls.\n");
    scanf("%d", &key);

    int res = BSM(0, n-1);
    if(res == -1)
        printf("\nNot Found");
    else
        printf("\nElement found at %d index", res);
}