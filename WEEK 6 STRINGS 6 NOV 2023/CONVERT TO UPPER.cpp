#include<stdio.h>
#include<string.h>
int main()
{
	char st1[50];
	scanf("%s",st1);
	for(int i=0;i<strlen(st1);i++)    
	{
		st1[i]=st1[i]-32; 
	}
	printf("%s",st1);
	return 0;
}
