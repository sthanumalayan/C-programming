#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i][i];
	}
	int i=n-1;
	int j=0;
	while(i>=0 && j<=n-1){
		sum+=arr[i][j];
		i--;
		j++;
	}
	if(n%2!=0)
	sum=sum- arr[n/2][n/2];
	printf("%d",sum);
	return 0;
}
