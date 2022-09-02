#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int sum;
    int k=0,a=0;
    printf("Enter the sum: ");
    scanf("%d",&sum);
    
    for(int i=0;i<=7;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                k++;
                a++;
                printf("%d) %d, %d\n",a, arr[i],arr[j]);
            }
        }
    }
    if(k>0)
       printf("Total number of pairs: %d",k);
    else
     printf("No pairs with the given sum.");
}