#include<stdio.h>
int main(){
	int n;
	printf("ENTER THE DAY NUMBER");
	scanf("%d",&n);
	if(n==1)printf("MONDAY");
	else if(n==2)printf("TUESDAY");
	else if(n==3)printf("WEDNESDAY");
	else if(n==4)printf("THURSDAY");
	else if(n==5)printf("FRIDAY");
	else if(n==6)printf("SATURDAY");
	else if(n==7)printf("SUNDAY");
	else printf("GIVE NUMBER BETWEEN 1 to 7");
	return 0;
}
