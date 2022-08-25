#include<stdio.h>
void main()
{
    int n;

    int k,l=0,m=0,sum;

    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    int count=n;
    
    printf("\nEnter the sum: ");
    scanf("%d",&k);
    
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
        int c;
        sum=a[i];
        if(sum>k)
        {
            count=1;
            break;
        }
        for(int j=i+1;j<n;j++)
        {
            sum=sum+a[j];
            if(sum>k)
            {
                c=j-i;
                if(c<count)
                {
                    count=c+1;
                    l=i;
                    m=j;
                    break;
                }
            }
        }
    }
    
    
    if(count>n)
    {
        printf("\ninvalid sum");
    }
    else
    {
        printf("\nThe smallest subarray length is: %d",count);
        printf("\nThe subarray is: \n");
        for(int i=l;i<=m;i++)
    {
        printf("%d\t",a[i]);
    }
    }
}