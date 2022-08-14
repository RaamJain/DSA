#include<stdio.h>
void main()
{
    int n;
    int count=0;
    int k;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    printf("\nEnter the elements: ");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    printf("Enter the sum: ");
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if((a[i]+a[j])==k)
            {
                count++;
            }
        }
    }

}