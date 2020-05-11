#include <stdio.h>

int main(){
	float n,n1,n2,n3,n4;
	printf("so tien gui ban dau:\n");
	scanf("%f",&n);

	n1 = n + n*8/100;
	n2 = n1 + n1*8/100;
	n3 = n2 + n2*8/100;
	n4 = n3 + n3*8/100;
	
	printf("so tien gui sau 4 nam la %f",n4);
}
