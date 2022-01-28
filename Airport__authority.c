#include<stdio.h>
int main()
{
    int n,arr[20],i,th,money_paid;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&th);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=th)
        {
            money_paid+=1;
        }
         else
        {
        money_paid+=2;
        }
    }
   
    printf("%d",money_paid);
    return 0;
}