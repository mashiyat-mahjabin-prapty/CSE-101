#include<stdio.h>
int validParenthesizationCount(int n)
{
    if(n==0)return 1;
    return validParenthesizationCount(n-1)*2*n*(2*n-1)/((n+1)*n);     //google CATALAN NUMBER
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",validParenthesizationCount(n));
    }
}
