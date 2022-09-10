#include<stdio.h>
void main()
{   
    int n=10;
    int a[10]={1,2,3,4,5,6,7};
    int k=5;
    int index=3;
    for(int i=7;i>=index;i--)
    {
        a[i+1]=a[i];
    }
    a[index]=k;
    for(int i=0;i<8;i++)
    {
        printf("%d ",a[i]);
    }
}