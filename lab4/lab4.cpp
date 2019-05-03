#include<stdio.h>
#include<math.h>
int main(){
	int n,i=2;
	printf("Nhap n:");
	scanf("%d",&n);
	if(n<=2) printf("Khong co so nguyen to nao nho hon n");
	else{
		printf("Cac so nguyen to nho hon n la: ");
		while(i<n){
			int count=0;
			for(int j=2;j<=sqrt(i);j++){
				if(i%j==0) count++;
			}
			if(count==0) printf("%d ",i);
			i++;
		}
	}
	return 0;
}
