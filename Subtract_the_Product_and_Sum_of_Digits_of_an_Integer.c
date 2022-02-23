#include<stdio.h>
int main()
{
    int i=1,n,r,sum=0,pro=1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        pro=pro*r;
        n=n/10;
    }
    printf("%d",pro-sum);
    return 0;
}