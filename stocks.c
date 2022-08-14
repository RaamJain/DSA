#include<stdio.h>
void main()
{
    int n,o,c;
    o=c;
    int max_profit=0;
    printf("Enter the no of stock rates: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the stock rate variation:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[j]-a[i])>max_profit)
            {
                max_profit=a[j]-a[i];
            }
        }
    }
    printf("the highest profit will be of %d",max_profit);

}