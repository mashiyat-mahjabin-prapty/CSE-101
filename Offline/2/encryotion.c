#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, i, j;
	char p;
	
	scanf("%d", &n);
	scanf("%c", &p);
	
	char *word = (char*)malloc(n * sizeof(char));
	
	for(i = 0; i < n; i++)
	scanf("%c", (word+i));
	
	for(i = 0; i < n; i+=8)
		printf("%lld ", *(long long int*)(word+i));
	
	
	return 0;
}
