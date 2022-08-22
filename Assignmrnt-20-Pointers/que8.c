#include<stdio.h>
#include<conio.h>

void sumOfEle(int *p,int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
       sum=sum+p[i]; 
    }
printf("Sum is %d ",sum);
}

int main()
{
    int a[10]={2,5,3,8,4,7,9,12,10,1};
    int size=10,i;
    sumOfEle(a,size);
    
        
    
    return 0;
}