#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("n: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum is=%d",sum);
}