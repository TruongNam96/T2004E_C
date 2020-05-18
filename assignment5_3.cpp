//tinh tong chu so cua n 

#include <stdio.h>

int main(){
	int n,t;
	int sum=0;
	
	printf("nhap 1 so nguyen duong\n");
	scanf("%d",&n);
	
	do {
		if (n<=0){
			printf("nhap lai so nguyen duong\n");
			scanf("%d",&n);
		}
	}while (n<=0);
	
	for (;n!=0;){ 
		t=n%10;
		sum+=t; 
		n/=10;
	}printf("tong cac chu so la %d",sum); 
}
