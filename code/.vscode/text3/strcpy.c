#include<stdio.h>
char* mycpy(char* dst,const char* src)
{
    char* ret=dst;
    while(*dst++=*src++);
    return ret;
}
int main(int argc,char const *argv[])
{
    char s1[]="hello";
    char s2[]="hello";
    printf("%s\n",mycpy(s1,s2));
    system("pause");
    return 0;
}