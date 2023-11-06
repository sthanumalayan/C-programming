#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	scanf("%s",str);
	int n=strlen(str);
	for(int i=0;i<n;i++)
	{
		if(str[i]!=str[n-i-1])
		{
			printf("NOT PALINDROME");
			return 0;
		}
	}
	printf("PALINDROME");
	return 0;
}
