#include<stdio.h>
#define MAX 100
int main(){
	int a[MAX],n;
	printf("Nhap kich thuoc mang:");
	scanf("%d",&n);
	printf("Nhap phan tu mang:\n");
	for(int i=0;i<n;i++){
		int temp;
		scanf("%d",&temp);
		for(int j=0;j<n;j++){
			if(temp==a[j]) {
				printf("Trung,nhap lai ");
				j--;
				scanf("%d",&temp);
			}				
		}		
		a[i]=temp;	
	}	
	for(int i=0;i<n-1;i++){
		int temp;
		for(int j=0;j<n-i-1;j++){
			if(a[j]<a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}			 
		}
	}
	for(int i=0;i<n;i++) printf("%d ",a[i]);
	return 0;
}
