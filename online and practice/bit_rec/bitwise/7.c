#include<stdio.h>
int oddparity(int n)
{
    int num_1=0;
    for(unsigned int i=1<<31;i>0;i>>=1)         // mask initialized at 2^32 and each time it is divided by 2 (right shifted 1 bit)
    {
        if(n&i)num_1++;
    }
    return (num_1%2);
}

int encode(int roll,int subject,int score)
{
    roll<<=3;
    roll|=subject;
    roll<<=7;
    roll|=score;
    roll<<=1;
    roll|=oddparity(roll);                                  //even parity is also ok. google it if you want to know about parity check.
    return roll;
}
int iscorrupted(int n)
{
    return oddparity(n);
}
void decode(int n)
{
    if(iscorrupted(n))
    {
        printf("THE NUMBER IS CORRUPTED\n");
        return;
    }
    n=(unsigned int)n>>1;
    printf("Score : %d\n",n&((1<<7)-1));
    n>>=7;
    printf("Subject : %d\n",n&((1<<3)-1));
    n>>=3;
    printf("Roll : %d\n",n);
}
int main()
{
    int n,m,x;
    while(scanf("%d%d%d",&n,&m,&x)!=EOF)              // input ctrl+z for EOF
    {
        int y=encode(n,m,x);
        printf("%d\n",y);
        decode(y);
    }
}

