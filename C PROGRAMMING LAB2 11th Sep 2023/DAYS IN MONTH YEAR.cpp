#include<stdio.h>
int main(){
	int year,month;
	printf("ENTER MONTH AND YEAR");
	scanf("%d %d",&month,&year);
	if( (month<=7 && (month%2!=0)) || (month>=8 && month%2==0)) printf("NUMBER OF DAYS IN %d %d IS 31",month,year);
	else{
		if(month==2)
		{
			if((year%4==0) &&((year%100!=0)||(year%400==0)))printf("NUMBER OF DAYS IN %d %d IS 29",month,year);
			else printf("NUMBER OF DAYS IN %d %d IS 28",month,year);
		}
		else printf("NUMBER OF DAYS IN %d %d IS 30",month,year);
	}
	return 0;
}
