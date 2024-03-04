#include<stdio.h>

int IsSubsequence(char *s1, char *s2)
{
	if(*s2 == '\0')
	return 1;
	if(*s1 == '\0')
	return 0;
	
	if(*s1 == *s2)
	return IsSubsequence(s1+1, s2+1);
	return IsSubsequence(s1+1, s2);	
	
}

int main()
{
	char s1[200], s2[50];
	int z;
	
	gets(s1);
	gets(s2);
	
	z = IsSubsequence(s1, s2);
	
	if(z)
	printf("YES");
	else
	printf("NO");
	
	return 0;
}
