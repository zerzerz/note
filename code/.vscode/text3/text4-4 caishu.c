#include<stdio.h>
int main()
{
    int number,n;
    int inp;
    int finished=0;
    int cnt=0;
    scanf("%d %d",&number,&n);
    do{
        scanf("%d",&inp);
        cnt++;
        if(inp<0){
            printf("Game Over\n");
            finished=1;
        }else if(inp>number){
            printf("Too big\n");    
        }else if(inp<number){
            printf("Too small\n");  
        }else{
            if (cnt==1){
                printf("Bingo!\n");
            }else if(cnt<=3){
                printf("Lucky You!\n");
            }else{
                printf("Good Guess!\n");
            }
            finished=1;
         }
        if (cut==n){
            if (!finished) {

                printf("Game Over\n");

            }
        }   
        
    }while(!finished);
    return 0;

        



    


}