//negative no. to one side
#include<stdio.h>
void negative(int a[],int n)
{   
    int a1[n];
    int t=0;
    for(int i =0;i<n;i++)
    {
        if(a[i]<0)
        {
            a1[t]=a[i];
            t++;
        }
    }
    for(int i =0;i<n;i++)
    {
        if(a[i]>=0)
        {
            a1[t]=a[i];
            t++;
        }
    }
    printf("The negative array is:");
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",a1[i]);
    }
}
void main()
{
    int n=0;
    printf("Enter the no. of elements:\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    negative(a,n);
}
