#include<stdio.h>
int isprime(int n)
{
    int c=0,i;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
         c++;
    }
    if(c==0)
      return 1;
    else
      return 0;
}
int main()
{
    int arr[1000],n,diff1=0,diff2=0,num1=0,num2=0,j,i,num;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        diff1=0,num1=0;
        for(j=arr[i];;j++)
        {
            if(isprime(j)==1)
            {
                diff1=j-arr[i];
                num1=j;
                break;
            }
            
        }
         for(j=arr[i];;j--)
        {
            if(isprime(j)==1)
            {
                diff2=arr[i]-j;
                num2=j;
                break;
            }
        }
        
    
    if(diff1<diff2)
    {
        printf("%d
",num1);
    }
    else
    {
        printf("%d
",num2);
    }
    }
    
    return 0;
}