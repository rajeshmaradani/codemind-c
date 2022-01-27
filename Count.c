#include<stdio.h>
int main()
{
    int n,arr[20],o_count=0,e_count=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            e_count++;
        }
        else
        {
            o_count++;
        }
    }
    printf("%d %d",e_count,o_count);
    return 0;
}