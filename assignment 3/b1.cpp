#include <stdio.h>
int main(){
	int s=0,count=0;
	for(int i=1;count<=100;i+=2){
		s=s+i;
		count++;
	}
	printf("%d",s);
	return 0;
	
}
