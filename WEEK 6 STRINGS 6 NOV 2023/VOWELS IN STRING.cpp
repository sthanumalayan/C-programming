#include<stdio.h>
#include<string.h>
int main()
{
	char st[50];
	scanf("%s",st);
	int n=strlen(st);
	for(int i=0;i<n;i++)
	{
		if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u')
		{
			printf("%c",st[i]);
		}
	}
	return 0;
}
