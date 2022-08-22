#include<stdio.h>
#include<conio.h>
#include<string.h>
void printfReverse(char *p)
{
int i;
int len=strlen(p);
for(i=len-1;i>=0;i--)
printf("%c ",p[i]);
}

int main()
{
    char str[10]="princeshu";
    printfReverse(str);
    return 0;
}