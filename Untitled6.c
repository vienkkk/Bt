#include <stdio.h>
#include <math.h>

int kiemtra(int a){
	int i; 
	if(a<=1){
		return 0; 
	} 
	for(i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0; 
		}  
	}
	return 1; 
} 
int main(){
	int n,j=0; 
	int i=2; 
	printf("nhap n ");
	scanf("%d", &n);
	while(j<n){ 
		if(kiemtra(i)){
			printf("%d ",i);
			j++; 
		} 
		i++; 
	}
	return 0; 
} 
