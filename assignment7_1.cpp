#include <stdio.h>

int main(){
	int ary[4][4];
	int average=0;
	
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			printf("ary[%d][%d]=",i,j);
			scanf("%d",&ary[i][j]);
		}
	}
	
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			printf("%4d",ary[i][j]);
		} printf("\n");
	}
	
	int sum=0;
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
		 	if (i==j){
		 	sum+=ary[i][j];
		 	}
		}
	}printf("tong duong cheo thu nhat = %d\n",sum);
	
	int sum2=0;
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			if (i+j==3){
				sum2+=ary[i][j];
			}
		}
	}printf("tong duong cheo thu hai = %d\n",sum2);
	
	average=(sum+sum2)/2;
	printf("trung binh cong hai duong cheo la %d",average);
}

