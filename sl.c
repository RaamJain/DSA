#include<stdio.h>
void main()
{
    int n=5;
    int a[5]={10,20,30,40,50};
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
           if((j!=i)&&(j-i!=1))
           {
            printf("%d,%d\n",a[i],a[j]);
           }
            int k=i;
            raam :
            if(k<=j)
            {
            printf("%d, ",a[k]);
            k++;
            goto raam;
            }
        //    for(int k=i;k<=j;k++)
        //    {
        //     printf("%d, ",a[k]);
        //    }
           printf("\n");
        }
    }
}