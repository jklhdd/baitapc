#include<stdio.h>
int main(){
	int a[10],n,count=0;
	printf("Nhap phan tu cua mang ");
	for(int i=0;i<10;i++) scanf("%d",&a[i]);
	printf("Nhap so can tim ");scanf("%d",&n);
	for(int i=0;i<10;i++){
		if(a[i]==n) count++;
	}
	if(count!=0) printf("So %d xuat hien %d trong mang",n,count);
	else printf("So %d khong xuat hien trong mang",n);
	return 0;		
	
}
