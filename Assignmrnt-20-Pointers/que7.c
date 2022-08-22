#include<stdio.h>
#include<conio.h>

void vowelConst(char *p)
{
int i,vowel=0,conts=0;
for(i=0;p[i];i++)
{
if(p[i]=='a'||p[i]=='e'||p[i]=='i'||p[i]=='o'||p[i]=='u')
{
    vowel++;
}
else
conts++;
}
printf("Vowel is %d and consonants is %d",vowel,conts);
}

int main()
{
    char str[10]="princeshu";
    vowelConst(str);
    //printf("length is %d",len);
    return 0;
}