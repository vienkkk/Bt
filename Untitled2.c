#include <stdio.h>

int main(){
	float a,c,d,e;
	int b; 
	printf("nhap so gio lam viec ");
	scanf("%f", &a);
	printf("muc luonng theo gio ");
	scanf("%d", &b);
	c=a*b;
	if(a>160){
		d=c+c*0.1;
		e=c*0.1; 
		printf("Tong luong co phu cap  %f\n",d);
		printf("Tien phu cap %.6f",e); 
	} 
	else{
		printf("Tong luong khong co phu cap %f",c); 
	} 
	
	return 0; 
} 
