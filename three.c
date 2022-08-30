#include<stdio.h>
void main()
{
    int n,m,l,k=0;
    int a[20];
    printf("ENter the no. of elements: ");
    scanf("%d",&n);
    printf("\nEnter the lower & upper bound: ");
    scanf("%d %d",&l,&m);
    int b[20];
    printf("\nENter the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<l)
        {
            b[k]=a[i];
            k++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if((a[i]>=l)&&(a[i]<=m))
        {
            b[k]=a[i];
            k++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>m)
        {
            b[k]=a[i];
            k++;
        }
    }
    // prinf("\n");
    for(int i=0;i<k;i++)
    {
        printf("%d ",b[i]);
    }

}
