#include<stdio.h>
#include<stdlib.h>


int sum(int *a, int n);


int main()
{
	int n, i, c1, c2;
	
	scanf("%d", &n);
	
	int *p = (int*)malloc(n * sizeof(int));
	
	for(i = 0; i < n; i++)
	scanf("%d", (p+i));
	
	c1 = sum(p, n);
	//printf("%d\n", c1);
	c2 = sum(p+1, n-1);
	//printf("%d\n", c2);
	
	if(c1 > c2)
	printf("Even index sum is greater");
	else if(c2 > c1)
	printf("Odd index sum is greater");
	else
	printf("Equal");
	
	return 0;
}

int sum(int *a, int k)
{
	int j, sum=0;
	for(j = 0; j < k; j+=2)
	sum += *(a+j);
	
	return sum;
}
