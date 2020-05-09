//tim so lon nhat

#include <stdio.h>

int main(){
	int a,b,c;
	printf("nhap so thu nhat\n");
	scanf("%d",&a);
	printf("nhap so thu hai\n");
	scanf("%d",&b);
	printf("nhap so thu ba\n");
	scanf("%d",&c);
	if (a>b){
		if (a>c){
			printf("Max=%d",&a);
		}else{
			printf("Max=%d",&c);
		}}else{
			if (b>c){
				printf("Max=%d",&b);
			}else{
				printf("Max=%d",&c);
			}
		}
	}

