#include<stdio.h>
int main(){
	int a,b,c;
	printf("ENTER THE THREE VALUES");
	scanf("%d %d %d",&a,&b,&c);
	if((a>b)&&(b>c))printf("%d is the greatest point",a);
	else
	{
		if(b>c)printf("%d is the greatest point",b);
		else printf("%d is the greatest point",c);
	}
	return 0;
}
