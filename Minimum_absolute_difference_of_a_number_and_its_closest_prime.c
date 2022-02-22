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
    int n,diff1=0,diff2=0,j;
    scanf("%d",&n);
    
   
        for(j=n;;j++)
        {
            if(isprime(j)==1)
            {
                diff1=j-n;
               
                break;
            }
            
        }
         for(j=n;;j--)
        {
            if(isprime(j)==1)
            {
                diff2=n-j;
                
                break;
            }
        }
        
    
    if(diff1<diff2)
    {
        printf("%d",diff1);
    }
    else
    {
        printf("%d",diff2);
    }
    
    
    return 0;
}