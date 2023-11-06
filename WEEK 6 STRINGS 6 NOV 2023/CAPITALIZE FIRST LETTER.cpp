#include<stdio.h>
#include<string.h>
int main()
{
	char st[50];
	scanf("%s",st);
	st[0]=st[0]-32;
	printf("%s",st);
	return 0;
}

