#include<stdio.h>
#include<string.h>
int main()
{
	char st[50];
	scanf("%s",st);
	int max=1;
	int min=1;
	int n=strlen(st);
	for(int i=0;i<n;i++)
	{
		int count=1;
		for(int j=i+1;j<n;j++)
		{
			if( st[i]!=' ' &&st[i]==st[j])
			{
				st[j]==' ';
				count++;
			}
		}
		if(max<count)max=count;
		if(min>count)min=count;
	}
	printf("%d %d",max,min);
	return 0;
}
