#include<stdio.h>
#include<math.h>
int length(int n)
{
    int length=0,r;
    while(n>0)
    {
        length=length+1;
        n=n/10;
    }
    return length;
}
int main()
{
    int n,r,len,sum=0,num;
    scanf("%d",&n);
    num=n;
    len=length(n);
    while(n>0)
    {
        r=n%10;
        sum=sum+pow(r,len);
        n=n/10;
        len--;
    }
    if(num==sum)
     printf("True");
    else
     printf("False");
     return 0;
}