#include<stdio.h>
int fibonacci(int n)
{
    int i,t1,t2,nt,found=0;
    t1=0;t2=1;
    nt=t1+t2;
    for(i=3;i<=n;i++)
    {
        if(n==nt)
        {
            found=1;
            break;
        }
        t1=t2;
        t2=nt;
        nt=t1+t2;
    }
    if(found==1)
    return 1;
    else
    return 0;
}
int main()
{
    int n,diff1=0,num1=0,diff2=0,num2=0,i;
    scanf("%d",&n);
    for(i=n;;i++)
    {
        if(fibonacci(i)==1)
        {
            diff1=i-n;
            num1=i;
            break;
        }
    }
    for(i=n;;i--)
    {
        if(fibonacci(i)==1)
        {
            diff2=n-i;
            num2=i;
            break;
        }
    }
    if(diff1<diff2)
     printf("%d",num1);
     else if(diff1==diff2)
      printf("%d %d",num2,num1);
    else
     printf("%d",num2);
     return 0;
}