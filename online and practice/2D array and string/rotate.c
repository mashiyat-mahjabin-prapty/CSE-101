#include<stdio.h>

int main()
{
    int arr[100][100];
    int n, i, j, k, swap, temp;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    }
    for(i=0; i < n; i++){
        for(j = 0, k = n-1; j < n/2; j++,k--){
            swap = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = swap;
        }
    }
    for(i = 0; i < n; i++){
        for(j = i; j < n; j++){
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    printf("\n\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
