#include<stdio.h>
int main()
{
    int x;
    int i;
    int count[10];
    for(i=0;i<10;i++){
        count[i]=0;
    }

    scanf("%d",&x);
    while(x!=-1){
        if(x>=0 && x<=9){
            count[x]++;

        }
        scanf("%d",&x);
    }
    for (i=0;i<10;i++){
        printf("%d:%d\n",i,count[i]);

    }
    getchar();
    getchar();
    return 0;

}