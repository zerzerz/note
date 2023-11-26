#include<stdio.h>
int main()
{
    srand(time(0));
    int number=rand()%100+1;
    int count=0;
    int a=0;
    printf("我已经想好了一个1到100之间的数，你猜是多少？\n");
    do {
        printf("请输入你猜的数字：");
        scanf("%d",&a);
        count++;
        if (a>number) {
            printf("你猜的数字大了\n");
        } else if (a<number) {
            printf("你猜的数字小了\n");
        }
    } while (a!=number);
    printf("恭喜你，猜对了，你一共猜了%d次\n",count);
    getchar();
    getchar();
    }