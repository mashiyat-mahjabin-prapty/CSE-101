#include<stdio.h>

int leftRot(int x, int n)
{
	unsigned y, p;
	
	y = x>>(sizeof(int)*8-n);
	p = x<<n;
	return p|y;
}

int rightRot(int x, int n)
{
	unsigned y, p;
	
	y = x<<(sizeof(int)*8-n);
	p = x>>n;
	return y|p;
}

void printBits(int x)
{
	unsigned y, i;
	
	for(i = 1<<31; i > 0; i>>=1){
		y = x&i;
		printf("%d", !!y);
	}
	return;
}

int main()
{
	int x, n, z;
	
	scanf("%d %d", &x, &n);
	printBits(x);
	
	printf("\n");
	z = leftRot(x, n);
	printBits(z);
	
	printf("\n");
	z = rightRot(x, n);
	printBits(z);
	
	return 0;
}
