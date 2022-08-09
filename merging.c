#include<stdio.h>
void main()
{
    int n=5,m=5;
    int a[5]={1,2,3,4,5};
    int b[5]={4,5,6,7,8};
    int c[10]={11,12,13,14,15,16,17,18,19,20};
    for(int i=0;i<(n+m);i++)
    {
        if(i<n)
        {
            c[i]=a[i];
        }
        else
        {
            c[i]=b[i-n];
        }

    }
    printf("the merged array is:");
    for(int i=0;i<(n+m);i++)
    {
        printf("%d ",c[i]);
    }
}