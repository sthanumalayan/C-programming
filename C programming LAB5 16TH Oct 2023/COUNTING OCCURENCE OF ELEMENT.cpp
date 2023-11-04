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
	int ele;
	printf("ENTER THE ELEMENT TO BE SEARCHED FOR:");
	scanf("%d",&ele);
	int count=0;
	for(int i=0;i<n;i++)
	{      
	   if(a[i]==ele)count++;
	}
	printf("THE NUMBER OF TIMES %d OCCURS IS %d",ele,count);
	
	return 0;
	
}
