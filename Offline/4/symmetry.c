#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *a[200] = {0};
	int n, i, j, count = 0;
	
	scanf("%d", &n);
	
	*a = (int**)malloc(n*sizeof(int*));
	
	for(i = 0; i < n; i++){
		a[i] = (int*)malloc(n*sizeof(int));
		for(j = 0; j < n; j++)
		scanf("%d", (*(a+i)+j));
	}
	for(i = 0; i < n; i++){
		for(j = i; j < n; j++){
			if(a[i][j] == a[j][i])
			count++;
			else
			break;
		}
	}
	float l = (n*(n+1))/2;
	if(count == l)
	printf("\nYES\n");
	else
	printf("\nNO\n");
	return 0;
}
