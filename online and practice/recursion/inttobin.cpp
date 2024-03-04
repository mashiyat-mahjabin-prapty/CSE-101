#include<stdio.h>

void inttobin(int n)
{
	if(n == 0)
	return;
	inttobin(n/2);
	printf("%d", n%2);
}

int main()
{
	int n;
	
	scanf("%d", &n);
	
	inttobin(n);
	
	return 0;
}


