#include<stdio.h>
int main()
{
    int m,n,lcm,i;
	scanf("%d%d",&m,&n);
	int max=m<n?n:m;
	for(i=max;i>=max;i++)
	{
		if(i%m==0 && i%n==0)
		{
			lcm=i;
			break;
		}
    } 	
    printf("%d",lcm);
    return 0;
}