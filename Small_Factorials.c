#include<stdio.h>
int main()
{
    int x[100],i,n,fact=1,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        fact=1;
        for(j=1;j<=x[i];j++)
        {
            fact=fact*j;
        }
        printf("%d
",fact);
    
    }
    return 0;
}