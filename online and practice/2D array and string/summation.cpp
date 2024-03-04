#include<stdio.h>
#include<stdlib.h>

int main()
{
	int **a=NULL, **b=NULL, **s=NULL, **d=NULL;
	int r, c, i, j;
	
	scanf("%d %d", &r, &c);
	printf("\n");
	
	a = (int**)malloc(r*sizeof(int*));
	b = (int**)malloc(r*sizeof(int*));
	s = (int**)malloc(r*sizeof(int*));
	d = (int**)malloc(r*sizeof(int*));
	
	for(i = 0; i < r; i++){
		*(a+i) = (int*)malloc(c*sizeof(int));
		*(b+i) = (int*)malloc(c*sizeof(int));
		*(s+i) = (int*)malloc(c*sizeof(int));
		*(d+i) = (int*)malloc(c*sizeof(int));
	}
		
	
	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++)
			scanf("%d", *(a+i)+j);
	}
	
	printf("\n");
	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++)
			scanf("%d", *(b+i)+j);
	}
	
	printf("\n");
	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++){
			*(*(s+i) + j) = *(*(a+i) + j) + *(*(b+i) + j);
			printf("%d ", *(*(s+i)+j));
		}
		printf("\n");
	}
	
	printf("\n");
	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++){
			*(*(d+i) + j) = *(*(a+i) + j) - *(*(b+i) + j);
			printf("%d ", *(*(d+i)+j));
		}
		printf("\n");
	}
	
	return 0;
}
