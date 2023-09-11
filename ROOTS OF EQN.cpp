#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	printf("ENTER A,B,C");
	scanf("%d %d %d",&a,&b,&c);
	int ans1=(-b +sqrt((b*b)-(4*a*c)))/(2*a);
	int ans2=(-b -sqrt((b*b)-(4*a*c)))/(2*a);
	printf("THE ROOTS ARE %d %d",ans1,ans2);
	return 0;
}
