#include<stdio.h>
int numbit(int n)
{
    if(n==0)return 0;
    if(n%2)return 1+numbit(n/2);
    return numbit(n/2);
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",numbit(n));
    }
}
