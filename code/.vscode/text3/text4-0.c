#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,j,k;
    int cnt=0;  

    i=a;
    while(i<=a+3){
        j=a;
        while(j<=a+3){
            k=a;
            while(k<a+3){
                if(i!=j){
                    if(i!=k){
                        if(j!=k){
                            cnt++;
                            printf("%d%d%d\n",i,j,k);
                            if (cnt==6){
                                printf("\n");
                                cnt=0;
                            }else{
                                printf(" ");
                            }
                    }
                }
                k++;
            }
            j++;
        }
        i++;
    }

    getchar();
    return 0;
    
}