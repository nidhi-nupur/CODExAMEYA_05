#include<stdio.h>
main()
{
    printf("Simple Calculator..\n");
    int a;
    printf("1:Add\n2:Subtract\n3:Multiply\n4:Divide\n5:Exit\n");
    while(1)
    {
        printf("a:");
        scanf("%d",&a);
        printf("Choose Your Operations from(1-5):%d\n",a);
        switch (a)
        {
            case 1:
            {
                int p,q;
                printf("Enter the value of p and q:");
                scanf("%d %d",&p,&q);
                printf("Add=%d\n",p+q);
            }
                break;
            case 2:
            {
                int p,q;
                printf("Enter the value of p and q:");
                scanf("%d %d",&p,&q);
                printf("Subtract=%d\n",p-q);
            }
                break;
            case 3:
            {
                int p,q;
                printf("Enter the value of p and q:");
                scanf("%d %d",&p,&q);
                printf("Multiply=%d\n",p*q);
            }
                break;
            case 4:
            {
                int p,q;
                printf("Enter the value of p and q:");
                scanf("%d %d",&p,&q);
                printf("Divide=%d\n",p/q);
            }
                break;
            case 5:
                exit(0);

            default:
            printf("Enter valid number");
                break;
        }
    }
}