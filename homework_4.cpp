//nhap ba so kiem tra xem co phai canh tam giac ko? neu dung tinh chu vi dien tich
#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,S,P,p2;
	printf("nhap ba so a,b,c\n");
	printf("so thu nhat:\n");
	scanf("%f",&a);
	printf("so thu hai:\n");
	scanf("%f",&b);
	printf("so thu ba:\n");
	scanf("%f",&c);
	if (a+b>c){
		if (a+c>b){
			if(b+c>a){
				P=a+b+c;
				p2=P/2;
				S= sqrt(p2*(p2-a)*(p2-b)*(p2-c));
				printf("Day la hinh tam giac\n");
				printf("chu vi = %f",P);
				printf("dien tich =%f",S);
			}else{
		printf("khong phai hinh tam giac");		
			}
		}else{
		printf("khong phai hinh tam giac");
		}
	}else{
	printf("khong phai hinh tam giac");
	}
}
	
