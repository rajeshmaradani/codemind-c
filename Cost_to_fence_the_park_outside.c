#include<stdio.h>
int main()
{
    int L,B,W,C,A,a,area,cost;
    scanf("%d %d %d %d",&L,&B,&W,&C);
    A=L*B;
    a=(2*W+L)*(2*W+B);
    area=a-A;
    cost=area*C;
    printf("%d",cost);
    return 0;
}