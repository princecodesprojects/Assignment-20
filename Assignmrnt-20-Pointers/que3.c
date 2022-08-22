#include<stdio.h>
#include<conio.h>

void sort(int *p,int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            int t;
            if(p[i]>p[j])
            {
                t=p[i];
                p[i]=p[j];
                p[j]=t;
            }
        }
    }

}

int main()
{
    int a[10]={2,5,3,8,4,7,9,12,10,1};
    int size=10,i;
    sort(a,size);
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}