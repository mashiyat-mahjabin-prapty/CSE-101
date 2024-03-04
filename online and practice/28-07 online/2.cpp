#include<stdio.h>
#include<stdlib.h>

int main()
{
	int **a;
	int n, i, j, k, swap;
	
	scanf("%d", &n);
	
	a = (int**)malloc(n * sizeof(int*));
	
	for(i = 0; i < n; i++)
	*(a+i) = (int*)malloc(n * sizeof(int));
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++)
			scanf("%d", *(a+i)+j);
	}
	
	for(i = 0; i < n; i++){
		for(j = 0, k = n-1; j < n/2; j++, k--){
			swap = *(*(a+i)+j);
			*(*(a+i)+j) = *(*(a+i)+k);
			*(*(a+i)+k) = swap;
		}
	}
	
	for(i = 0; i < n; i++){
		for(j = i; j < n; j++){
			swap = *(*(a+i)+j);
			*(*(a+i)+j) = *(*(a+j)+i);
			*(*(a+j)+i) = swap;
		}
	}
	
	printf("\n\n");
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("%d ", *(*(a+i)+j));
		}
			printf("\n");
	}
	return 0;
}
