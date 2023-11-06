#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50];
	char str2[50];
	scanf("%s",str1);
	scanf("%s",str2);
	if(strlen(str1)!=strlen(str2)) return 9;
	for(int i=0;i<strlen(str1);i++)
	{
		if(str1[i]!=str2[i])
		{
			printf("NOT EQUAL");
			return 0;
		}
	}
	printf("EQUAL");
	return 0;
}
