#include<stdio.h>
void main()
{
    int n,cs=0;
    printf("Enter the no of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i = 0 ; i<n ;i++)
    {
        cs=cs+a[i];
        if(cs>max)
        {
            max=cs;
        }
    }
    printf("the maximum subarray sum is: %d",max);
}