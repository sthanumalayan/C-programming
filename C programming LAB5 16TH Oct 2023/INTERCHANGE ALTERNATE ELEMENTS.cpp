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
	for(int i=0;i<n-1;i=i+2)
	{      
		int temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
	
}
