#include<stdio.h>

int main()
{
    int arr[10],n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                printf("%d ",arr[k]);
            }
            printf("\n");
        }
        
    }
    
    return 0;
}
