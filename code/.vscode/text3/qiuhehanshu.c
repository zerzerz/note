#include<stdio.h>
void sum(int begain,int end)
{
    int i;
    int sum=0;
    for (i=begain;i<=end;i++)
    {
        sum+=i;

    }
    printf("%d到%d的和是%d\n",begain,end,sum);

}
int main()
{
    sum(1,10);
    sum(20,30);
    sum(35,45);

    getchar();

    getchar();
    return 0;
}