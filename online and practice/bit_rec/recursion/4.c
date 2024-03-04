#include<stdio.h>
void hanoi(int n, int source, int target, int intrm)
{
    if(n==0)return;
    hanoi(n-1,source,intrm,target);
    printf("Move %d to %d\n",source,target);
    hanoi(n-1,intrm,target,source);
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        hanoi(n,1,2,3);
    }
}
