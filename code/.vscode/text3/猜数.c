#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int r=rand();
    int a;

    scanf("输入%d",&a);
    while(a!=r){
        if(a>r){
            printf("大了\n");
        }else{
            printf("小了\n");
        }
        scanf("输入%d",&a);
    }
    printf("猜对了\n");
    system("pause");
    return 0;
}