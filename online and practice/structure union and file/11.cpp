#include<stdio.h>

typedef union{
	short int x;
	char y[2];
}convert;

int main()
{
	convert p;
	
	scanf("%x", &p.x);
	
	printf("%x %x", p.y[0], p.y[1]);
	
	return 0;
}
