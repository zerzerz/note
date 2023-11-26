#include<stdio.h>
void minmax(int a[],int len,int *max,int *min);

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10,12,45,55,69,};
    int min,max;
    minmax(a,sixeof(a)/sizeof(a[0]),&max,&min);
    printf("min=%d,max=%d\n",min,max);

    return 0;
}

void minmax(int a[],int len,int *max,int *min)
{
    int i;
    *min=*max=a[0];
    for (i=1;i<len;i++){
        if (a[i]<*min){
            *min=a[i];
        }else if(a[i]>*max){
            *max=a[i];
        }
    }
}