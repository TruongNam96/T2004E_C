//nhap ba so tim so nho nhat
#include <stdio.h>

int main(){
	int a,b,c;
	printf("nhap ba so tim so nho nhat\n");
	printf("nhap so thu nhat:\n");
	scanf("%d",&a);
	printf("nhap so thu hai:\n");
	scanf("%d",&b);
	printf("nhap so thu ba:\n");
	scanf("%d",&c);
	if (a>b){
		if (c>b) {
			printf("so thu hai nho nhat/n");
		}else{
			printf("so thu ba nho nhat\n");
		}
	}else{
		if (c>a){
			printf("so thu nhat nho nhat\n");
		}else{
			printf("so thu ba nho nhat\n");
		}
	}
}
