#include<stdio.h>
#include<string.h>
int palindrome(char *s,char *e)
{
    if(s>=e)return 1;
    if(*s==*e)return palindrome(s+1,e-1);
    return 0;
}
int main()
{
     char s[1000];
    while(gets(s))
    {
        if(palindrome(s,s+strlen(s)-1))printf("YES\n");
        else printf("NO\n");
    }
}
