#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	scanf("%s",str);
	char ch='r';
	int pos=3;
	int n=strlen(str);
	for(int i=n;i>=pos;i--)
	{
		str[i]=str[i-1];
	}
	str[pos-1]=ch;
	printf("%s",str);
	return 0;
}
