#include<stdio.h>
int main()
{   
    int x;
    for ( x = 2; x<100; x++)
    {
       // scanf("%d",&x);

        int i;  
        int isPrime = 1;
        for (i=2;i<x;i++) {
            if (x%i==0) {
                isPrime = 0;
                break;
            }
            
        }   
        if (isPrime==1) {
        printf("%d\n",x);
        }
   
    }
    printf("\n");
    getchar();
    
    return 0;
}