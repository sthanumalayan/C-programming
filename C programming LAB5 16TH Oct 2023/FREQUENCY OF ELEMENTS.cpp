#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)max=a[i];
	}
	int freq[max+1]={0};
	for(int i=0;i<n;i++)
	{
		freq[a[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]==a[i])a[j]=-1;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]!=-1)printf("THE FREQUENCY OF %d IS %d \n",a[i],freq[a[i]]);
	}
	return 0;
}
