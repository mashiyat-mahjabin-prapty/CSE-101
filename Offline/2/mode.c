#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, i, max=0, k, j;
	
	scanf("%d", &n);
	
	int *p = (int*)malloc(n * sizeof(int));
	int *z = (int*)malloc(n * sizeof(int));
	for(i = 0; i < n; i++)
	*(z+i) = 0;
	
	for(i = 0; i < n; i++)
	scanf("%d", (p+i));
	
	for(i = 0; i < n; i++){
		for(j = i; j < n; j++){
			if(*(p+i) == *(p+j))
			(*(z+i))++;
		}	
		if(*(z+i) > max)
		max = *(z+i);		
	}
	
	for(k = 0; k < n; k++){
		if(*(z+k) == max)
		printf("%d ", *(p+k));	
	}
	
	return 0;
}
