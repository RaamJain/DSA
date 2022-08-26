#include<stdio.h>
void main()
{
    int n,count=1,k;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(int i=0;i<n;i++)
    {
        k=a[i];
        int c=1;
        for(int j=0;j<n;j++)
        { 
            if(a[j]==k+1)
            {
                c++;
                k=a[j];
                j=0;
                continue;
            }
            if(c>count)
            {
                count=c;
                printf("%dCount:",count);
            }
        }
    }
    printf("\ncount is: %d",count);
}