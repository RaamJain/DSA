#include<stdio.h>
void main()
{
    int n,m=0;
    printf("Enter the no of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements with atleast one duplicate:\n");
    for(int i=0;i<n+1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n+1;i++)
    {
        for(int j=i+1;j<n+1;j++)
        {
            if(a[i]==a[j])
            {
                m=a[j];
            }
        }
    }
    if(m==0)
    {
        printf("There is no duplicate array elements");
    }
    else
    {
        printf("The duplicate element is:\n");
        printf("%d",m);
    }
}