#include<stdio.h>
bool days31(int m){
	return (((m<=7)&&(m%2!=0)) || ((m>=8) && (m%2==0)));
}
bool days30(int m){
	 return ((m!=2) && (!days31));
}
bool checkleap(int y){
	return ((y%4==0) && ((y%100!=0) || (y%400==0)));
}
int main(){
	int d,m,y;
	printf("ENTER DAY MONTH YEAR ");
	scanf("%d %d %d",&d,&m,&y);
	if(d>31 || m>12 || d<=0 || m<=0 || y<=0 || ((days30(m))&& (d==31))||((!checkleap(y) && m==2 && d==29)))
	{
		printf("%d %d %d IS INVALID DATE",d,m,y);
		return 0;
	}
	else if((d==31) && (m==12))
	{
		d=1;
		m=1;
		y++;
	}
	else if((d==28 || d==29) && (m==2))
	{
		if((checkleap(y)) && d==29)
		{
			d=1;
			m++;
		}
		else if(!checkleap(y) && d==28)
		{
			d=1;
			m++;
		}
	}
	else if((days31(m) && d==31)||(days30(m) && d==30))
	{
		d=1;
		m++;
	}
	else
	{
		d++;
	}
	printf("THE NEW DATE IS %d %d %d",d,m,y);
	return 0;
}
