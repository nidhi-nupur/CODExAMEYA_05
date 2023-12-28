#include<stdio.h>
main()
{
    int a;
    printf("a: ");
    scanf("%d",&a);
    if(a%4==0)
    {
        printf("The year is a Leap Year.");
    }
    else
    {
        printf("The year is not a Leap Year.");
    }
}