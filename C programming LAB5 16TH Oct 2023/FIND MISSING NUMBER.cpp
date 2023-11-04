#include<stdio.h>
int main()
{
	int n;
	printf("ENTER SIZE OF ARRAY:");
	scanf("%d",&n);
	int a[n];
	printf("ENTER ELEMENTS OF ARRAY");
	for(int i=0;i<n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	int sum=0;
	for(int i=0;i<n-1;i++)
	{
		sum+=a[i];
	}
	printf("THE MISSING NUMBER IS %d",(n*(n+1))/2 -sum);
	return 0;
}
