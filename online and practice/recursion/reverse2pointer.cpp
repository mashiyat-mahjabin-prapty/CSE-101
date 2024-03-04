#include<stdio.h>
#include<string.h>

int pallindrome(char *a, char *b);

int main()
{
	char s[200];
	int l, z;
	
	gets(s);
	
	l = strlen(s);
	
	z = pallindrome(s, s+l-1);
	
	if(!z)
	printf("Not a pallindrome");
	else
	printf("A pallindrome");
	
	return 0;
}

int pallindrome(char *s, char *p)
{	
	if(*s == *p)
	return 1;
	else
	return 0;	
	
	pallindrome(s+1, p-1);
}
