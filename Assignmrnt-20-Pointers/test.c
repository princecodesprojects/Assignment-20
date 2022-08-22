#include<stdio.h>
#include<conio.h>
void input(int *p);
void display(int *p);
void find_largest(int *p);
int main()
{
    int a[5];
input(a);
//display(a);
find_largest(a);
    return 0;
}

void input(int *p)
{
    printf("Address in p is %d\n",p);
printf("Enter 5 numbers\n");
for(int i=0;i<5;i++)
{
    scanf("%d",p+i);
}
}

void display(int *p)
{
printf("Display called\n");

    for(int i=0;i<5;i++)
    {
        printf("%d ",p[i]);
    }
}

void find_largest(int *p)
{
    int i,max;
    max=p[0];
    for(i=1;i<5;i++)
    {
        if(max<p[i])
        max=p[i];
    }
    printf("maximum is %d",max);
}