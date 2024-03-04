#include<stdio.h>
#include<stdlib.h>

int main()
{
	int **a, **b, **m;
	int r1, c1, r2, c2, i, j, k;
	
	printf("Enter the row and column for matrix 1: ");
	scanf("%d %d", &r1, &c1);
	printf("Enter the row and column for matrix 2: ");
	scanf("%d %d", &r2, &c2);
	
	while(c1 != r2){
		printf("ERROR, multiplication not possible\n\n");
		printf("Enter the row and column for matrix 1: ");
		scanf("%d %d", &r1, &c1);
		printf("Enter the row and column for matrix 2: ");
		scanf("%d %d", &r2, &c2);
	}
	a = (int**)malloc(r1*sizeof(int*));
	b = (int**)malloc(r2*sizeof(int*));
	m = (int**)malloc(r1*sizeof(int*));
	
	for(i = 0; i < r1; i++)
		*(a+i) = (int*)malloc(c1*sizeof(int));
	for(i = 0; i < r2; i++)
		*(b+i) = (int*)malloc(c2*sizeof(int));
	for(i = 0; i < c1; i++)
		*(m+i) = (int*)malloc(c2*sizeof(int));
	
	for(i = 0; i < r1; i++){
		for(j = 0; j < c1; j++)
			scanf("%d", *(a+i)+j);
	}
	
	printf("\n");
	for(i = 0; i < r2; i++){
		for(j = 0; j < c2; j++)
			scanf("%d", *(b+i)+j);
	}
	
	for(i = 0; i < r1; i++){
		for(j = 0; j < c2; j++)
		*(*(m+i)+j) = 0;
	}
	for(i = 0; i < r1; i++){
		for(j = 0; j < c2; j++){
			for(k = 0; k < c1; k++)
			*(*(m+i)+j) = *(*(a+i)+k) * *(*(b+k)+j);
		}
	}
	
	printf("\n");
	for(i = 0; i < r1; i++){
		for(j = 0; j < c2; j++){
			printf("%d ", *(*(m+i)+j));	
		}
		printf("\n");
	}
	return 0;	
}
