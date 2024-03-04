#include<stdio.h>
int n;                                   // n can be sent as parameter if global variable is restricted
void print(char *s,int ind,int vis)
{
    if(ind==n)
    {
        s[ind]='\0';
        printf("%s\n",s);
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(!(vis&(1<<i)))
        {
            s[ind]='a'+i;
            print(s,ind+1,vis|(1<<i));
        }
    }
}
int main()
{
    char s[27];
    while(scanf("%d",&n)!=EOF)
    {
        print(s,0,0);
    }
}
