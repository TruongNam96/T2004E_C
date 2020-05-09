#include <stdio.h>
//cho hai so a, b tim a*b va a/b
int main(){
	float a,b;
	printf("nhap so a\n");
	scanf("%f",&a);
	printf("nhap so b\n");
	scanf("%f",&b);
	if (a>=b) {
		float x;
		x=a/b;
		printf("thuong cua a va b la %f",x);
	}else{
		float y;
		y=a*b;
		printf("tich cua a va b la %f",y);
	}
}

