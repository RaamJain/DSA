#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. of layers");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j<=i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
            
        }
        printf("\n");
    }
}