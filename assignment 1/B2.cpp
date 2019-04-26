#include <stdio.h>
int main(){
	int a,b,c,max,min;
	printf("Nhap so: ");
	scanf("%d%d%d",&a,&b,&c);
	max=a;min=b;
	if(b>c){
		if(b>a) max=b;
		if(c>a) min=a; else min=c;
	}
	else if(c>a){
		max=c;
		if(b>a) min=a; else min=b;
	}	
	printf("So lon nhat la: %d \n",max);
	printf("So nho nhat la: %d \n",min);
	return 0;
}
