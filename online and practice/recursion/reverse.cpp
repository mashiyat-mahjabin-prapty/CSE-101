#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void stringrev(char *m)
{
	if(*m == '\0')
	return;
	stringrev(m+1);
	printf("%c", *m);
	return;
}

int main()
{
	char s[200];
	int l;
	
	gets(s);
	
	l = strlen(s);
	
	stringrev(s);
	
	return 0;
}
