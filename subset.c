#include<stdio.h>
void main()
{
    int n,m,count=0;
    printf("Enter the value of n,m:");
    scanf("%d %d",&n,&m);
    int a1[n];
    int a2[m];
    printf("enter the elements for array1:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("enter the elements for array2:\n");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a2[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a2[j]==a1[i])
            {
                count++;
                break;
            }
        }
    }
    if(count==m)
    {
        printf("\nYES");
    }
    else{
        printf("NO");
    }

}