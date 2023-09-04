#include<stdio.h>

int main(){
	printf("ENTER THE NUMBERS");
	int a,b;
	scanf("%d %d",&a,&b);
	int c=a+b;
	printf("THE SUM IS %d \n",c);
	int d=b-a;
	printf("THE DIFFERENCE IS %d \n",d);
	int e=a*b;
	printf("THE PRODUCT IS %d \n",e);
	int f=b/a;
	printf("THE QUOTIENT IS %d",f);
	return 0;
}
