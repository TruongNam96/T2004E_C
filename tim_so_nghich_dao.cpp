#include <stdio.h>

int main(){
	int a;
	printf("nhap so can kiem tra\n");
	scanf("%d",&a);
	if (a>0){
		if (10000>a && a>999){
			float n;
			n= (float)1/a;
			printf("so nghich dao cua %d la %f",a,n);
		}else{
			printf("sai yeu cau...moi nhap lai");
		}
	}else{
		printf("sai yeu cau...moi nhap lai");
	}
}
