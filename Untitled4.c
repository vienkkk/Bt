#include <stdio.h>

int main(){
	int a,i;
	printf("nhap so can tim uoc ");
	scanf("%d", &a);
	for(i=1;i<=a;i++){
		if(a%i==0){
			printf("uoc la %d\n",i); 
		} 
	} 
	
	return 0; 
} 
