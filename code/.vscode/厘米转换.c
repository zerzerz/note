#include<stdio.h>
int main()
{
    int cm = 0;
    scanf("%d",&cm);

    int foot = cm / 30.48;
    int inch = ((cm / 30.48) - foot )*12;

    printf("英尺=%d,英寸=%d",foot,inch);

    getchar();
    getchar();

    return 0;
    

}