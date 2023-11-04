#include<stdio.h>
int main()
{
	int n,k;
	printf("ENTER SIZE OF ARRAY:");
	scanf("%d",&n);
	printf("ENTER THE Kth INDEX");
	scanf("%d",&k);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)       
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("%dTH LARGEST IS %d \n",k,a[n-k]);
	printf("%dTH SMALLEST IS %d",k,a[k-1]);
	return 0;
}
