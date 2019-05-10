#include<stdio.h>
int main(){
	int a[10];
	float s=0;
	for(int i=0;i<10;i++){
		printf("Nhap phan tu thu %d:",i);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<10;i++) s+=a[i];
	printf("Gia tri trung binh cua mang: %.2f",s/10);
	
	return 0;
}
