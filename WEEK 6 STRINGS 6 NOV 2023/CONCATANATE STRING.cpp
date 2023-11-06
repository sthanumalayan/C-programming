#include<stdio.h>
#include<string.h>
int main()
{
	char st1[]="thanu";
	char st2[]="malayan";
	char st[strlen(st1)+strlen(st2)];
	for(int i=0;i<strlen(st1);i++)
	{
		st[i]=st1[i];
	}
	for(int i=0;i<strlen(st2);i++)
	{
		st[strlen(st1)+i]=st2[i];
	}
	printf("%s",st);
	return 0;
}
