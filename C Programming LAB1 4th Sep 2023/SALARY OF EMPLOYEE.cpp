#include<stdio.h>

int main(){
	float da,sal,hra,total;
	scanf("%f",&sal);
	da=0.45*sal;
	hra=0.16*sal;
	total=da+hra+sal;
	printf("THE TOTAL SALARY IS %f",total);
	return 0;
}
