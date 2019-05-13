#include <stdio.h>
int main(){
	int m,n,p,q;
	do{
		printf("Nhap kich thuoc ma tran a:");
		scanf("%d%d",&m,&n);
		if(m<=0||n<=0) printf("Nhap lai\n");
	}while (m<=0||n<=0);
	do{
		printf("Nhap kich thuoc ma tran b:");
		scanf("%d%d",&p,&q);
		if(p!=n) {
			printf("Hai ma tran vua nhap khong nhan duoc!\n");
			printf("Nhap lai\n");
		}
	}while(p!=n||q<=0);
	int a[m][n],b[n][q],c[m][q];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<q;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<q;j++){
			c[i][j]=0;
			for(int k=0;k<n;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("Tich hai ma tran:\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<q;j++){
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}

	return 0;
}
