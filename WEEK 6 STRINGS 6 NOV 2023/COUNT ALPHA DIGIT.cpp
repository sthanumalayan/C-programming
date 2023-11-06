#include<stdio.h>
#include<string.h>
int main()
{
	char st[50];
	scanf("%s",st);
	int digit_count=0;
	int alpha_count=0;
	int special_count=0;
	int n=strlen(st);
	for(int i=0;i<n;i++)
	{
		if(st[i]>='0' && st[i]<='9') digit_count++;
		else if(st[i]>='a'&&st[i]<='z')alpha_count++;
		else special_count++;
	}
	printf("%d %d %d",digit_count,alpha_count,special_count);
	return 0;
}
