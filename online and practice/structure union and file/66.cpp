#include<stdio.h>

typedef union{
	char str[200];
	long long int num[50];
}wton;

int main()
{
	wton word;
	char c[2];
	int n, i;
	scanf("%d", &n);
	
	gets(c);
	gets(word.str);
	
	for(i = 0; i < n/8; i++)
	printf("%lld ", word.num[i]);
	
	return 0;
}
