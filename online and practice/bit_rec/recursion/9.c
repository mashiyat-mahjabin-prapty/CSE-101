#include<stdio.h>
int binaryStringCount(int n)
{
    if(n==0)return 1;
    if(n==1)return 2;
    if(n==2)return 4;
    return binaryStringCount(n-1)+binaryStringCount(n-2)+binaryStringCount(n-3);
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",binaryStringCount(n));
    }
}
