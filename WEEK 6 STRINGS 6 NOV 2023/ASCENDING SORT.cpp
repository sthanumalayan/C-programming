#include<stdio.h>
#include<string.h>
int main()
{
	char st[50];
	scanf("%s",st);
	int n=strlen(st);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(st[j]>st[j+1])
			{
				char temp=st[j];
				st[j]=st[j+1];
				st[j+1]=temp;
			}
		}
	}
	printf("%s",st);
	return 0;
}
