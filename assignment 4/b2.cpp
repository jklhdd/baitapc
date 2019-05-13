#include <stdio.h>
int main(){
	int f0,f1,fn;
	f0=0;f1=1;fn=0;
	for(int i=2;i<=10;i++){				//100 bi tran so nen em chay den 38 
		fn=f0+f1;
		f0=f1;
		f1=fn;			
	}
	printf("%d ",fn);	
	return 0;
}
