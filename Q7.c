#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. of elements: \n");
    scanf("%d",&n);
    int a[n];
    printf("ENter the elements:\n");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k = a[n-1];
    for(int i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=k;
    printf("the cyclically rotated array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}