#include<stdio.h>

int fibsum(int n)
{
	if(n == 0) 
	return 0;
	if(n == 1)
	return 1;
	return fibsum(n-1)+fibsum(n-2) + 1;
}

int main()
{
	int n;
	
	scanf("%d", &n);
	
	printf("%d", fibsum(n));
	
	return 0;
}
