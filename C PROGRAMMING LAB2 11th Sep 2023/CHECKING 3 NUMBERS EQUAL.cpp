#include<stdio.h>
int main(){
	int a,b,c;
	printf("ENTER VALUES OF A,B,C");
	scanf("%d %d %d",&a,&b,&c);
	if((a==b)&&(b==c)&&(c==a))printf("ALL ARE EQUAL");
	else printf("ALL ARE NOT EQUAL");
	return 0;
}
