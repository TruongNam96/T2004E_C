#include <stdio.h>

int main(){
	int n;
	int n2=0;
	printf("nhap so can tinh\n");
	scanf("%d",&n);
	
	for (;n!=0;n/10){
	n2=n2*10+n%10;
	n/=10;
	}
	printf("so dao nguoc la %d",n2);
}

