#include<stdio.h>
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int arr[n][m];
	int arr2[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&arr2[i][j]);
		}
	}
	int add[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			add[i][j]=arr[i][j]+arr2[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",add[i][j]);
		}
		printf("\n");
	}
	return 0;
}
