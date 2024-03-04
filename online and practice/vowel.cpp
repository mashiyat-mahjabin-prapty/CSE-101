#include<stdio.h>

int vowel(char *p)
{
	
	if(*p == '\0')
	return 0;
	
	if(*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u' || *p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U')
	return vowel(p+1)+1;
	else
		vowel(p+1);
}

int main()
{
	char s[100];
	int z;
	
	gets(s);
	
	z = vowel(s);
	
	printf("%d", z);
	
	return 0;
}
