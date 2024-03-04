#include<stdio.h>
void hanoi(int n, int source, int target, int intrm, int *rem_step)
{
    if(n==0||(*rem_step)<=0)return;
    hanoi(n-1,source,intrm,target,rem_step);
    (*rem_step)--;
    if(*rem_step==0)
    {
        printf("MOVE %d to %d\n",source,target);
    }
    hanoi(n-1,intrm,target,source,rem_step);
}
int main()
{
    int n,step;
    while(scanf("%d%d",&n,&step)!=EOF)
    {
        if(step==0)
        {
            printf("NO SUCH MOVE\n");
            continue;
        }
        hanoi(n,1,2,3,&step);
        if(step>0)
        {
            printf("NO SUCH MOVE\n");
        }
    }
}
