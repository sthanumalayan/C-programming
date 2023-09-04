#include<stdio.h>

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("THE VALUE OF A, B IS %d %d",a,b,"%n");
	int c=a;
	a=b;
	b=c;
	printf("THE VALUE OF A, B IS %d %d",a,b);
	return 0;
}
