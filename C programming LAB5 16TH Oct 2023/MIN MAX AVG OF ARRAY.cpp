#include<stdio.h>
int main(){
	float avg=0;
	int n;
	printf("ENTER SIZE OF ARRAY ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int max,min=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]<min)min=arr[i];
		if(arr[i]>max)max=arr[i];
		avg+=arr[i];
	}
	printf("THE MIN IS %d \nTHE MAX IS %d \nTHE AVG IS %f",min,max,avg/n);
	return 0;
}
