#include<stdio.h>

int main(){
    int a,b,c;
    do{
    	printf("nhap a b c\n");
    	scanf("%d %d %d ,&a,&b,&c");
    }	
    while(a+b<=c ||	a+c<=b || b+c<=a);
    	printf("3 so la 3 canh cua 1 tam giac");
    
    return 0;
    
}  
