#include<stdio.h>
#include<string.h>
int main()
{
	char st[50];
	scanf("%s",st);
	int n=strlen(st);
	for(int i=0;i<n/2;i++)
	{
		char temp=st[i];
		st[i]=st[n-i-1];
		st[n-i-1]=temp;
	}
	printf("%s",st);
	return 0;
}
