#include<stdio.h>
int main()
{
	int n;
	printf("ENTER SIZE OF ARRAY:");
	scanf("%d \n",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n/2;i++)
	{      
		int temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
	
}



