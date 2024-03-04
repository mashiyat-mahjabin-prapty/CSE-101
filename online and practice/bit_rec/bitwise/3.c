#include<stdio.h>
int evenparity(int n)
{
    int num_1=0;
    for(unsigned int i=1<<31;i>0;i>>=1)         // mask initialized at 2^32 and each time it is divided by 2 (right shifted 1 bit)
    {
        if(n&i)num_1++;
    }
    return !(num_1%2);
}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)              // input ctrl+z for EOF
    {
        if(evenparity(n))printf("YES\n");
        else printf("NO\n");
    }
}

