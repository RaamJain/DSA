#include<stdio.h>
int main()
{
    int m,t=0;
    int s=0,n=0,l=0;
    int j=0;
    printf("Enter the size of the array: ");
    scanf("%d",&m);
    int ar[m];
    int a[m];
    printf("Enter the array: ");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<m;i++)
    {
        for(j=i;j<m;j++)
        {
            s=0;
            for(int k=i;k<=j;k++)
            {
                s=s+ar[k];
                a[l]=ar[k];
                l++;
            }
            if(s==0)
            {
                n++;
                for(int o=i;o<=j;o++)
                {
                    printf("%d ",ar[o]);
                }
            }
        }
    }
    printf("There can be %d subarrays that will have the sum =0.",n);
}