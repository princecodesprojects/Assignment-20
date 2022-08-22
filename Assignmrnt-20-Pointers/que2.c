#include<stdio.h>
#include<conio.h>
#include<string.h>

void swap(char *p,char *q)
{
char temp[10];
strcpy(temp,p);
strcpy(p,q);
strcpy(q,temp);
printf("%s %s ",p,q);
}

int main()
{
    char a[]="prince";
    char b[]="shukla";
    swap(a,b);
    return 0;
}