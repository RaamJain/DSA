#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. of elements: \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int k = a[j];
                a[j] = a[j+1];
                a[j+1] = k;
            }
        }
    }
     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    int median =0,k;
    if(n%2==0)
    {
         k = n/2;
        for(int i=(k-1);i<=k;i++)
        {
            int median = median + a[i];
        }
        printf("\nThe median is: %d",(median/2));
    }
    else
    {
        k=n/2;
        median = a[k];
        printf("\nThe median is: %d",median);
    }
}