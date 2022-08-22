#include<stdio.h>
#include<conio.h>

void swap(int *p,int *q)
{
int t;
t=*p;
*p=*q;
*q=t;
}
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a=%d and b=%d",a,b);
    return 0;

}