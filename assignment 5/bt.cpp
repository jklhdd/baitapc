#include <stdio.h>
int main(){
	int a[10],max,min;

	for(int i=0;i<10;i++) scanf("%d ",&a[i]);
	max=0;min=a[0];	
	for(int i=0;i<10;i++){
		if(a[i]>max) max=a[i];
		if(a[i]<min) min=a[i];		
	}
	printf("\n%d\n",max);
	printf("%d ",min);
	return 0;
}
