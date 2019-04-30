#include <stdio.h>
#include <math.h>
int main(){
	int n=0,count=0;
	printf("Nhap n:");scanf("%d",&n);
	if(n<2) printf("Khong phai so nguyen to");
	else {
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				count++;
			}
			i++;
		}		
		if(count==0) printf("La so nguyen to");
		else printf("Khong phai so nguyen to");
	}
		
	return 0;	
}
