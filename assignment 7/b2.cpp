#include <stdio.h>
int main(){
	int m,n;
	do{
		printf("Nhap kich thuoc mang M x N ");
		scanf("%d%d",&m,&n);
	}while(m<0||n<0);
	int a[m][n],b[m][n],t[m][n],h[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("\nNhap phan tu a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("\nNhap phan tu b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			t[i][j]=a[i][j]+b[i][j];
			h[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("\nMa tran tong:\n ");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",t[i][j]);
			
		}
		printf("\n");
	}
	printf("\nMa tran hieu:\n ");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",h[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}
