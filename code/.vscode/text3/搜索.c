#include<stdio.h>
int search(int key,int a[],int length);

int main(void)
{
    int a[]={2,5,6,3,8,11,13,26,14,32,};
    int x;
    int loc;
    printf("请输入一个数字；");
    scanf("%d",&x);
    loc=search(x,a,sizeof(a)/sizeof(a[0]));
    if (loc!=-1){
        printf("数字%d在数组中的位置是%d\n",x,loc);
    }else{
        printf("数字%d不在数组中\n",x);

    }
    getchar();
    getchar();
    return 0;
}
int search(int key,int a[],int length)
{
    int ret=-1;
    int i;
    for (i=0;i<length;i++){
        if (a[i]==key){
            ret=1;
            break;
        }
    }
    return ret;
}
