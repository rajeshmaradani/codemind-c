#include<stdio.h>
int main()
{
    int i,n,t1,t2,next_term;
    t1=0;
    t2=1;
    next_term=t1+t2;
    scanf("%d",&n);
    printf("%d %d ",t1,t2);
    for(i=3;i<=n;i++)
    {
        printf("%d ",next_term);
        t1=t2;
        t2=next_term;
        next_term=t1+t2;
    }
    return 0;
}