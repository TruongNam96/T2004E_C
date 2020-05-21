#include <stdio.h>

int main(){
	int a[4][3];
	int b[4][3];
	
	for (int i=0;i<4;i++){
		for (int j=0;j<3;j++){
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for (int i=0;i<4;i++){
		for (int j=0;j<3;j++){
			printf("%5d",a[i][j]);
		}printf("\n");
	}
	
	for (int i=0;i<4;i++){
		for (int j=0;j<3;j++){
			printf("b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for (int i=0;i<4;i++){
		for (int j=0;j<3;j++){
			printf("%5d",b[i]);
		}printf("\n");
	}
	
	int tong[4][3];
	int hieu[4][3];
	for (int i=0;i<4;i++){
		for (int j=0;j<3;j++){
			tong[i][j]=a[i][j]+b[i][j];
			hieu[i][j]=a[i][j]-b[i][j];
	}
}
	for (int i=0;i<4;i++){
		for (int j=0;j<3;j++){
			printf("%5d",tong[i][j]);
		}printf("\n");
	}
	
	for (int i=0;i<4;i++){
		for (int j=0;j<3;j++){
			printf("%5d",hieu[i][j]);
		}printf("\n");
}
}
