#include<stdio.h>
#include<conio.h>

int  length(char *p)
{
int i;
for(i=0;p[i];i++);
return i;
}

int main()
{
    char str[10]="princeshu";
    int len=length(str);
    printf("length is %d",len);
    return 0;
}