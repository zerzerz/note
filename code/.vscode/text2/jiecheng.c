#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);
    int fact = 1;

    int i=1;    
    //for (i=1;i<=n;i++) {
    //   fact *= i;
   // }
    for (i=n;i>=1;i--) {
        fact *= i;
    }
    printf("%d!=%d\n",n,fact);  
    getchar();
    getchar();
    return 0;

}
