#include<stdio.h>

int matching(char *s,char *t)
{
    if(*t=='\0')return 1;
    if(*s=='\0')return 0;
    if(*s==*t)return matching(s+1,t+1);
    return matching(s+1,t);
}

int main()
{
    char s[1000],t[1000];
    while(gets(s)&&gets(t))
    {
        if(matching(s,t))printf("YES\n");
        else printf("NO\n");
    }
}
