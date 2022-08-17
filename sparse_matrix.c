#include<stdio.h>
void main()
{
    int n, m; 
    printf("Enter the number of colums in the array: ");
    scanf("%d", &n);
    printf("\nEnter the no. of rows: ");
    scanf("%d", &m);
    int a[n][m];
    printf("Enter the elements of a sparse matrix: ");
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("\nThe sparse matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    int b[10][10];
    int t=0;
    int l=0;
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
           if(a[i][j]!=0)
           {
                b[t][l]=i;
                b[t][l+1]=j;
                b[t][l+2]=a[i][j];
                t++;
           }
        }
    }
    printf("the compact matrix is:\n");
    for (int i = 0; i < t; i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
}