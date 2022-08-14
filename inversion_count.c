#include<stdio.h>
void main()
{
    int n;
    int inversion_count = 0;
    printf("Enter the no. of elemnets: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element: \n" );
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The inversion count is:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int k = a[j];
                a[j]=a[j+1];
                a[j+1]=k;
                inversion_count++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    printf("%d",inversion_count);

}