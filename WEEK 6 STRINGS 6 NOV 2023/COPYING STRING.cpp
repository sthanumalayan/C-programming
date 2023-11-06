#include<stdio.h>
#include<string.h>
int main()
{
	char st1[50];
	scanf("%s",st1);
	char st2[50];
	for(int i=0;i<strlen(st1);i++)
	{
		st2[i]=st1[i];
	}
	printf("%s",st2);
	return 0;
}
