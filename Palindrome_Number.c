#include<stdio.h>
int reverse(int n)
{
	int rev=0,r;
	while(n)
	{
		r = n%10;
		rev=rev*10+r;
		n=n/10;
	}
	return rev;
	
	}
int main()
{
    int arr[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(i=0;i<n;i++)
    {
        if(arr[i] == reverse(arr[i]))
         printf("True
");
        else
         printf("False
");
    }
    return 0;
}