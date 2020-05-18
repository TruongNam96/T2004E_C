//dem chu so cua n

#include <stdio.h>

int main(){
	int n;
	
	printf("nhap 1 so nguyen duong\n");
	scanf("%d",&n);
	
	do {
		if (n<0){
			printf("nhap lai so nguyen duong\n");
			scanf("%d",&n);
		}
	}while(n<=0);
	
	int dem=1;
	while (n>9){
		dem++;
		n/=10;
	}printf("so tren co %d chu so",dem);
}
