#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int m = n;
	int	h = 0;
		
	while(m){
		h = h*10 + m%10;
		m/= 10;
	}
	if(h == n)
		printf("%d la so thuan nghich",n);
	else
		printf("%d khong phai la so thuan nghich");
	
	return 0;
}
