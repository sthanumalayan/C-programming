#include<stdio.h>
#include<string.h>
int main()
{
	char st[50];
	char ch;
	scanf("%s",st);
	scanf("%c",&ch);
	for(int i=0;i<strlen(st);i++)
	{
		if(st[i]==ch)
		{
			printf("%d",i+1);
			break;
		}
	}
	return 0;
}
