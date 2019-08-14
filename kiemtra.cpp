#include <stdio.h>

int sum(int a, int b)
{
   return a + b;
}
int hieu(int a, int b)
{
   return a - b;
}
int tich(int a, int b)
{
   return a * b;
}
int thuong(int a, int b)
{
   return a / b;
}

int main(){
	int a = 4;
	int b = 3;
	
	printf("tinh tong hai so : %d + %d =%d\n",sum(a,b))
	printf("tinh hieu hai so : %d - %d =%d\n",hieu(a,b));
	printf("tinh tich hai so : %d * %d =%d\n",tich(a,b)); 
	printf("tinh thuong hai so : %d / %d =%d\n",thuong(a,b));
	

	return 0;
}
