#include<stdio.h>

int leftrotate(int x, int n)
{
	n = n%(sizeof(x)*8);
	unsigned int p = x&((1<<(32-n))-1);
	p <<= n;
	return p | ((unsigned int)x >> (sizeof(x)*8-n));
}

void printbits(int z)
{
	int mask = 1 << ((sizeof(z) * 8)-1);
	printf("%d", ((z&mask) ? 1 : 0));
	z <<= 1;
}

int main()
{
	int n, x, z;
	scanf("%d", &x);
	scanf("%d", &n);
	
	z = leftrotate(x, n);
	printf("%lld\n", z);
	
	printbits(z);
	
	return 0;
}


