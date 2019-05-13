#include <stdio.h>
int main(){
	int a[4][4];
	int s[4]={0,0,0,0};
	int max=0,indexm=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("\nNhap phan tu a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			s[i]+=a[i][j];
		}
	}
	for(int i=0;i<4;i++){
		if(s[i]>max){
			max=s[i];
			indexm=i;
		}
	}
	printf("Hang %d co tong lon nhat bang %d",indexm+1,max);
	return 0;
	
}
