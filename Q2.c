//max and min
#include<stdio.h>

int main()
{
    int a[20];
    int n;
    printf("Enter the no. of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<n;i++)
    {
        for(int j =0;j<n-1;j++)
        {
            if(a[j]<a[j+1])
            {
                int k = a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
        }
    }
    printf("the max element is: %d\nThe min element is : %d",a[0],a[n-1]);
    return 0;
}