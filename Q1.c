// reversing an array
#include <stdio.h>

int main()
 {
	int a[10],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);  
	}
	for(int i = 0 , j=n-1 ; i<(n/2) , j>(n/2) ; i++ , j--)
	{
	    int k= a[i];
	    a[i]=a[j];
	    a[j]=k;
	}
	for(int i = 0 ; i<n ; i++)
	{
	    printf("%d ",a[i]);
	}
	return 0;
}