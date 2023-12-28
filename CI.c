#include <stdio.h>
#include <math.h>
main()
{
    float P,R,n,T,CI;
    printf("P=");
    scanf("%d",&P);
    printf("R=");
    scanf("%d",&R);
    printf("n=");
    scanf("%d",&n);
    printf("T=");
    scanf("%d",&T);
    CI=P*pow((1+R/n),(n*T));
    printf("%f",CI);
}