#include<stdio.h>
int main(){
	int phy,chem,bio,math,csc;
	scanf("%d %d %d %d %d",&phy,&chem,&bio,&math,&csc);
	int avg=(phy+chem+bio+math+csc)/5;
	if(avg>=90)printf("%d is GRADE A",avg);
	else if(avg>=80)printf("%d is GRADE B",avg);
	else if(avg>=70)printf("%d is GRADE C",avg);
	else if(avg>=60)printf("%d is GRADE D",avg);
	else if(avg>=50)printf("%d is GRADE E",avg);
	else if(avg>=40)printf("%d is GRADE F",avg);
	else printf("%d is FAIL",avg);
	return 0;
}
