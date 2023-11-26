#include<stdio.h>
int main()
{
    int x;
    int one, two, five;
    int exit = 0;

    scanf("%d",&x);
    for (one = 1; one <x*10;one++){
        for (two = 1; two <x*10/2;two++){
            for (five = 1; five <x*10/5;five++){
                if (one+two*2+five*5==x*10) {
                    printf("1元%d个，2元%d个，5元%d个\n",one,two,five);
                    exit=1;
                    goto out;
            
                }
            }
           
            
        }
       
    }
    out:
    getchar();
    getchar();  
    return 0;
}