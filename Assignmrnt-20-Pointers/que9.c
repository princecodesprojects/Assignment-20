#include<stdio.h>
#include<conio.h>

void printfReverse(int *p,int size)
{
    int i;
    for(i=size-1;i>=0;i--)
    {
        printf("%d ",p[i]);
      
    }

}

int main()
{
    int a[10]={2,5,3,8,4,7,9,12,10,1};
    int size=10,i;
    printfReverse(a,size);
    return 0;
}