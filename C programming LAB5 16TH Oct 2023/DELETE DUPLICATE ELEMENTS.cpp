#include<stdio.h>
int main()
{
	int n;
	printf("ENTER SIZE OF ARRAY:");
	scanf("%d",&n);
	int a[n];
	printf("ENTER ELEMENTS OF ARRAY");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{      
	    for(int j=i+1;j<n;j++)
	    {
	    	if(a[j]==a[i])
			{
			a[j]=-1;	
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]!=-1)printf("%d ",a[i]);
	}
	
	return 0;
	
}
