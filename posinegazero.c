#include<stdio.h>
int main()
{
    int n;
    printf("n: ");
    scanf("%d",&n);
    if(n>0)
    {
        printf("The number is positive.");
    }
    else if(n<0)
    {
        printf("The number is negative.");
    }
    else
    {
        printf("Zero.");
    }
}