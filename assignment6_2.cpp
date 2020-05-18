//tim so duong nho nhat trong mang n

#include <stdio.h>

int main(){
	int n,ary[n],min;
	
	printf("nhap so luong phan tu cua mang\n");
	scanf("%d",&n);
	
	for (int i=0;i<n;i++){
		printf("nhap so thu %d\n",i);
		scanf("%d",&ary[i]);
	}
	
	for (int i=0;i<n;i++){
		if (ary[i]%2==0){
			min=ary[i];
		}
	}
	
	for (int x=0;x<n;x++){
		if (ary[x]%2==0 && min>ary[x]){
			printf("so duong be nhat la %d",ary[x]);
			break;
		}
	} 
}
