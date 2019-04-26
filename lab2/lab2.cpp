#include <stdio.h>
int main(){
	int a,b,c,t1,t2,t3;
	printf("Nhap ba canh cua tam giac: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a<=0||b<=0||c<=0) printf("Ba canh khong phai cua am giac")
	else {
		t1=a+b;
		t2=a+c;
		t3=b+c;
		if(t1>c&&t2>b&&t3>a) printf("Ba canh la cua tam giac \n");
		else printf("Ba canh khong la cua tam giac \n");
	}
	return 0;
}
