#include <stdio.h>
int main(){
	int n;
	printf("Nhap N:");
	scanf("%d",&n);
	switch (n){
		case 2: printf("Hom nay la thu 2 \n");break;
		case 3: printf("Hom nay la thu 3 \n");break;
		case 4: printf("Hom nay la thu 4 \n");break;
		case 5: printf("Hom nay la thu 5 \n");break;
		case 6: printf("Hom nay la thu 6 \n");break;
		case 7: printf("Hom nay la thu 7 \n");break;
		case 8: printf("Hom nay la chu nhat \n");break;
		default: printf("Khong phai ngay trong tuan");break; 
	}	
	return 0;	
}
