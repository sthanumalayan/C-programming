#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int charge_per_unit=10;
	int cost_per_charge=10;
	printf("THE ELECTRICITY BILL IS %d",(n*charge_per_unit*cost_per_charge));
	return 0;
}
