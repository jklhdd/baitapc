#include <stdio.h>
int main(){
	int n,s=0;
	printf("Nhap n: ");
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(n%i==0) s+=i;		
	}
	if(s==n) printf("n la so hoan hao");
	else printf("n khong la so hoan hao");
	return 0;
}
