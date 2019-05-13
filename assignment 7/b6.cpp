#include <stdio.h>
int main(){
	int a,b,temp;
	scanf("%d%d",&a,&b);
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}
	else if(a<=b){
	
	
		while(a<=b){
			if(a%2==1) printf("%d ",a);
			a++;
		}
	
	}
	return 0;
	
}
