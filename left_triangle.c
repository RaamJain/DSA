#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. of layers");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            if(j==i)
            {
            for(int k=j;k>0;k--)
            {
                printf("*");
            }
            }
            else{
                printf(" ");
            }
            
            
        }
        printf("\n");
    }
}