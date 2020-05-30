//nhap mang so nguyen n, xem chuoi so duong so tong lon nhat la bao nhieu

#include <stdio.h>

int main(){
	int n;
	printf("nhap so luong mang ");
	scanf("%d",&n);
	int ary[n];
	
	for (int i=0;i<n;i++){
		printf("nhap pt thu %d ",i);
		scanf("%d",&ary[i]);
	}
	
	int sum=0;
	int max=0;
	for (int i=0;i<n;i++){
		if (ary[i]>0){
			sum += ary[i];
		}else{
			if (sum>max){
				max=sum;
			} sum=0;
		}
	}
	
	printf("tong so nguyen duong lien tiep lon nhat la %d",max);
}
