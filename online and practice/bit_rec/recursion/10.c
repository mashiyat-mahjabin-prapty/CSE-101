#include<stdio.h>
int bacteriaCount(int n)
{
    if(n==0)return 0;
    if(n==1)return 1;
    if(n==2)return 1;
    return bacteriaCount(n-1)+bacteriaCount(n-2)+bacteriaCount(n-3);
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",bacteriaCount(n));
    }
}
