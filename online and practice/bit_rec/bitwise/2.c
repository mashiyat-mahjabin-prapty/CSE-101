#include<stdio.h>
void printbinary(int n)
{
    for(unsigned int i=1<<31;i>0;i>>=1)         // mask initialized at 2^32 and each time it is divided by 2 (right shifted 1 bit)
    {
        printf("%d",!!(n&i));
    }
    printf("\n");
}
int rightrotate(int x,int n)
{
    n%=32;
    unsigned int y=(x&((1<<n)-1));
    x=(unsigned int)x>>n;
    return x|(y<<(32-n));
}
int main()
{
    int n,x;
    while(scanf("%d%d",&n,&x)!=EOF)              // input ctrl+z for EOF
    {
        printbinary(n);
        printbinary(rightrotate(n,x));
    }
}
