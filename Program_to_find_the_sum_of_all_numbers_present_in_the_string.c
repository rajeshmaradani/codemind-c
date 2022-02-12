#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int i,sum=0;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>= '0' && str[i]<= '9')
        {
            str[i]=str[i]- '0';
			sum=sum+str[i];
        }
    }
    printf("%d",sum);
    return 0;
}