#include<stdio.h>

int main(){
	int a[10];
	printf("day so nguyen truoc khi dao nguoc: \n");
		for(int i = 0; i < 10; ++i)
		{
	printf("Nhap so thu %d: ", i+1);
   		scanf("%d", &a[i]);
	}

	for(int i = 9; i >= 0; --i)
	{
   	printf("%5d", a[i]); 
	}

	return 0;
}
