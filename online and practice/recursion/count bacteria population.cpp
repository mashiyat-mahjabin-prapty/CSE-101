#include<stdio.h>

int bacteriaCount(int n)
{
	if(n == 0)
	return 0;
	if(n == 1)
	return 1;
	if(n == 2)
	return 1;
	
	return bacteriaCount(n-1)+bacteriaCount(n-2)+bacteriaCount(n-3);
}

int main()
{
	int n, z;
	
	scanf("%d", &n);
	
	z = bacteriaCount(n);
	
	printf("%d", z);
	
	return 0;
}
