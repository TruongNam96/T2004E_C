//tim uoc chung cua a,b

#include <stdio.h>

int main(){
	int a,b,c;
	
	printf("nhap so thu nhat:\n");
	scanf("%d",&a);
	printf("nhap so thu hai\n");
	scanf("%d",&b);
	
	if (a<b){
	for (c=a;c>=1;c--){
			if (a%c==0 && b%c==0){
			printf("uoc chung lon nhat cua hai so la %d",c);
			break;
			}
		}
	} 
	
	if (a>b){
	for (c=b;c>=1;c--){
			if (b%c==0 && a%c==0){
			printf("uoc chung lon nhat cua hai so la %d",c);
			break;
			}
		}
	}
	
}

