#include<stdio.h>
int reverse(int n)
{
    int r,reverse=0;
    while(n>0)
    {
        r=n%10;
        reverse=reverse*10+r;
        n=n/10;
    }
    return reverse;
}
int main()
{
    int n,sn,rn,srn,srrn;
    scanf("%d",&n);
    sn=n*n;
   
    rn=reverse(n);
    
    srn=rn*rn;
    srrn=reverse(srn);
   
    if(sn==srrn)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}