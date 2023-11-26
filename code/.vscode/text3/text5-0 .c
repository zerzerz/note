#include<stdio.h>
int main()
{
    int i,n;
    double dividend,divisor;
    double sum=0.0;
    double t;

    scanf("%d",&n);
    
    dividend=2;
    divisor=1;
    for (i=1;i<=n;i++){
        sum+=dividend/divisor;
        t=dividend;
        dividend+=divisor;
        divisor=t;
    }
    printf("%f %f\n",dividend,divisor);
    printf("%.2f\n",sum);

    getchar();
    getchar();
    return 0;
}