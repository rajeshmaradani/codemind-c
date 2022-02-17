#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,M,p;
    scanf("%d %d %d",&x,&y,&m);
    p=pow(x,y);
    M=p%m;
    printf("%d",M);
    return 0;
}