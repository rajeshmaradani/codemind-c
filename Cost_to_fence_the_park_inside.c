#include<stdio.h>
int main()
{
    int L,B,W,C,a,A,area,cost;
    scanf("%d %d %d %d",&L,&B,&W,&C);
    A=L*B;
    a=(L-2*W)*(B-2*W);
    area=A-a;
    cost=area*C;
    if(2*W>=L || 2*W>=B)
    {
        printf("Impossible");
        
    }
    else
    {
    printf("%d",cost);
    }
    return 0;
}