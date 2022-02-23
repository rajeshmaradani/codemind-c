#include<stdio.h>
int polindrome(int n)
{
    int t,rev=0,r;
    t=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==t)
     return 1;
    else
     return 0;
}
int main()
{
    int n,i,diff1=0,diff2=0,num1=0,num2=0;
    scanf("%d",&n);
    for(i=n;;i++)
    {
        if(polindrome(i)==1)
        {
            diff1=i-n;
            if(diff1!=0)
            {
               num1=i;
               break;
            }
        }
    }
    for(i=n;;i--)
    {
        if(polindrome(i)==1)
        {
            diff2=n-i;
            if(diff2!=0)
            {
            num2=i;
            break;
            }
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