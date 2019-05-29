#include<stdio.h>
#include<math.h>
int isPrime(int a);
int main(){
	int m,n;
	printf("Please, enter a number: \n");
	printf("+ n: "); scanf("%d",&n);
	printf("+ m: "); scanf("%d",&m);
	if(m<n){
		int temp=m;
		m=n;
		n=temp;
	}
	printf("The prime numbers between %d and %d:\n",n,m);
	for(int i=n;i<=m;i++){
		if(isPrime(i)) printf("%d\n",i);
	}
	return 0;
}
int isPrime(int a){
	int count=0;
	if(a <= 1) return 0;
	else{
		for(int i=1;i<=sqrt(a);i++){
			if(a%i==0) count++; 
		}
	}	
	if(count == 1) return 1;
	else return 0;
}
