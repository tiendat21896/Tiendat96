#include <stdio.h>

	int main(){
		int a,b,c;
		printf("nhap a =");
		scanf("%d",&a);
		printf("nhap b =");
		scanf("%d",&b);
		printf("nhap c =");
		scanf("%c",&c);	
		if("a>b&b>c"){
			("%d max,%d min",a,c);}
		if("a>b&a>c&c>b"){
			("%d max,%d min",a,b);}
		if("b>a&a>c"){
			("%d max,%d min",b,c);}
		if("b>c&c>a"){
			("%d max,%d min",b,a);}
		if("c>a&a>b"){
			("%d max,%d min",c,b);}
		if("c>a&b>a"){
			("%d max,%d min",c,a);}
			
		return 0;
		
		}
		
		
		
