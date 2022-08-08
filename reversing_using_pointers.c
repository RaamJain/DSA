#include<stdio.h>
int rev(int* a,int s)
{
    for(int i=s;i>0;i--)
    {
        printf("%d ",*a);
        a--;
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter the number of elements.");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int size=sizeof(ar)/sizeof(int);
    //printf("%d",size);
    int* p=&ar[size-1];
    rev(p,size);
    return 0;

}