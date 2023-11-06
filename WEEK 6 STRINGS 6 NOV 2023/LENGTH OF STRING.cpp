#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	scanf("%s",str);
	int len=0;
	while(str[len])
	{
		len++;
	}
	printf("%d",len);
	return 0;	
}
