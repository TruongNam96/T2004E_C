#include <stdio.h>
//tim so dao nguoc
int main(){
	int a,b,c,d,e,n1,n2,n3,n4;
	printf("Nhap so can tim so dao nguoc:\n");
	scanf("%d",&a);
	
	if (a>=0 && 9999>=a){
	
		if (9>=a){
		n1=a*10;
		printf("so dao nguoc cua %d la %d",a,n1);
		
		}else if (99>=a && a>=10){ //bc tim cb
		b=a/10;
		c=a-b*10;
		n2=c*10+b;
		printf("so nguoc dao cua %d la %d",a,n2);
		
		}else if (a>=100 && 999>=a){ //bcd tim dcb
		b=a/100;
		c=(a-(b*100+d))/10;
		d=a%100-c*10;
		n3=d*100+c*10+b;
		printf("so nguoc dao cua %d la %d",a,n3);
		
		}else if (a>=1000 && 9999>=a){  //bcde tim edcb
		b=a/1000;
		c=(a%1000-(d*10+e))/100;
		d=(a%1000-(c*100+e))/10;
		e=a-(b*1000+c*100+d*10);
		n4=e*1000+d*100+c*10+b;
		printf("so nguoc dao cua %d la %d",a,n4);
		}
			
	}else{
		printf("vo nghiem...nhap lai 1 so nguyen duong toi da 4 chu so...");
	}
}
