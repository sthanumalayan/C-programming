#include<stdio.h>

int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c){
		printf("THE GREATEST IS %d",a);
	}
	else{
		if(b>c) printf("THE GREATEST IS %d",b);
		else printf("THE GREATEST IS %d",c);
	}
	return 0;
}


