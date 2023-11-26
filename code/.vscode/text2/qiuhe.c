/*#include<stdio.h>
int main()
{
    int n;
    int i;
    double sum=0.0;

    scanf("%d",&n);
    for (i=1;i<=n;i++) {
        sum += 1.0/i;
    }
    printf("sum is %f\n",sum);
    getchar();
    getchar();
    return 0;
}
*/

#include<stdio.h>
int main()
{
    int n;
    int i;
    double sum=0.0;
    int sign = 1;

    scanf("%d",&n);
    for (i=1;i<=n;i++) {
        sum += sign*1.0/i;
        sign = -sign;
    }
    printf("sum is %f\n",sum);
    getchar();
    getchar();
    return 0;
}