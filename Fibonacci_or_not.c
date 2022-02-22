#include<stdio.h>
int main()
{
    int i,n,t1,t2,next_term,found=0;
    t1=0;
    t2=1;
    next_term=t1+t2;
    scanf("%d",&n);
    
    for(i=3;i<=n;i++)
    {
        if(next_term==n)
        {
            found=1;
            break;
        }
        
        t1=t2;
        t2=next_term;
        next_term=t1+t2;
    }
    if(found==1)
    {
        printf("True");
    }
    else
        {
            printf("False");
        }
    return 0;
}