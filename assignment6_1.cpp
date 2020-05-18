//nhap mang n so nguyen, tim so le cuoi cung trong mang

#include <stdio.h>

int main(){
	int n;
	int ary[n];
	
	printf("nhap so luong phan tu cua mang\n");
	scanf("%d",&n);
	
	for (int i=0;i<n;i++){
		printf("nhap so thu %d\n",i);
		scanf("%d",&ary[i]);
	}
	
	for (int i=n-1;i>=0;i--){
		if (ary[i]%2!=0){
			printf("so le cuoi cung trong mang la %d",ary[i]);
			break;
		}
	} 
}
