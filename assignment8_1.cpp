//nhap mang so nguyen tim so luong cac so nguyen duong lien tiep nhieu nhat 

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
	
	int max=0;
	int count =0;
	for (int i=0;i<n;i++){
		if (ary[i]>0){
			count++;
		}else{
			if (count>max){
			max = count;
		} count =0;
	}
	}
	
	printf("so luong mang nguyen duong lien tiep nhieu nhat la %d",max);
}
