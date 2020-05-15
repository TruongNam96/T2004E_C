//Nhap vào 2 so a, b dam bao a < b. Sau dó tính tong các so tu a -> b

#include <stdio.h>

int main(){
	int a,b;
	int S=0;
	printf("nhap so thu nhat:\n");
	scanf("%d",&a);
	printf("nhap so thu hai:\n");
	scanf("%d",&b);
	
	do{
		if(a>=b){
		printf("nhap lai so thu nhat\n");
		scanf("%d",&a);
		printf("nhap lai so thu hai\n");
		scanf("%d",&b);
		}
	} while (a>=b);
	
	for (int i=a;i<=b;i++){
		S+=i;
	}printf("tong cua cac so giua %d va %d la %d",a,b,S);
}
