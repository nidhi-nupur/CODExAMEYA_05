#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three number: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("First number is greatest.");
    }
    else if(b>c && b>a)
    {
        printf("Second number is greatest.");
    }
    else 
    {
        printf("Third number is greatest.");
    }
}