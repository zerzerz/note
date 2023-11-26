#include<stdio.h>
int mycmp(const char* s1,const char* s2)
{
    while(*s1==*s2&&*s1!='\0'){
        s1++;
        s2++;
    }
    return *s1-*s2;
}
int main(int argc,char const *argv[])
{
    char s1[100],s2[100];
    scanf("%s %s",s1,s2);
    printf("%d\n",mycmp(s1,s2));
    system("pause");
    return 0;
}