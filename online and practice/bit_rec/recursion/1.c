#include<stdio.h>
#include<string.h>
void reverse(char *s)
{
    if(*s=='\0')return;
    reverse(s+1);
    printf("%c",*s);
}
int main()
{
     char s[1000];
    while(gets(s))
    {
        reverse(s);
        printf("\n");
    }
}
