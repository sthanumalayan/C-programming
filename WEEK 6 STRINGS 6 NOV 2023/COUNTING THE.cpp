#include<stdio.h>
#include<string.h>
int main()
{
	char st[50];
	scanf("%s",st);
	int count=0;
	for(int i=0;i<strlen(st);i++)
	{
		if(st[i]=='t' && st[i+1]=='h'&& st[i+2]=='e') count++;
	}
	printf("%d",count);
	return 0;
}
