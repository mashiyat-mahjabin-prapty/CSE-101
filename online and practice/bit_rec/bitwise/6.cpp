#include<stdio.h>
void printbinary(int n)
{
    for(unsigned int i=1<<31;i>0;i>>=1)         // mask initialized at 2^32 and each time it is divided by 2 (right shifted 1 bit)
    {
        printf("%d",!!(n&i));
    }
    printf("\n");
}
int leftrotate(int x,int n)
{
    n%=32;
    unsigned int y=x&((1<<(32-n))-1);           //y= lowest (32-n) bits of x
    y<<=n;
    return y|((unsigned int)x>>(32-n));
}
int main()
{
    int n,x;
    while(scanf("%d%d",&n,&x)!=EOF)              // input ctrl+z for EOF
    {
        printbinary(n);
        printbinary(leftrotate(n,x));
    }
}
