#include<stdio.h>
void main()
{
    int n,m;
    printf("Enter the size of the two arrays: ");
    scanf("%d %d",&n,&m);
    int a[n];
    int b[m];
    int c[n+m];
    printf("Enter %d elements in first array: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter %d elements in second array: ",m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
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
    printf("The merged array is:\n");
    for(int i=0;i<(n+m);i++)
    {
        printf("%d ",c[i]);
    }
    printf("\n");
        for(int i=0;i<n+m;i++)
    {
        for(int j=0;j<n+m-i-1;j++)
        {
            if(c[j]>c[j+1])
            {
                int k = c[j];
                c[j] = c[j+1];
                c[j+1] = k;
            }
        }
    }
    printf("the sorted merged array is:\n");
     for(int i=0;i<n+m;i++)
    {
        printf("%d ",c[i]);
    }
    int median=0 , k;
    if((n+m)%2==0)
    {
         k = (n+m)/2;
        for(int i=(k-1);i<=k;i++)
        {
             median = median + c[i];
        }
        printf("\nThe median is: %d",(median/2));
    }
    else
    {
        k=(n+m)/2;
        median = c[k];
        printf("\nThe median is: %d ",median);
    }
    
    
}    