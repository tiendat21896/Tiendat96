#include <stdio.h>

int main(){
	int n,c = 0,i;
	printf("nhap gia tri n =\n");
	scanf("%d",&n);
	for (i = 1; i < n; ++i){
		if(n % i == 0){
			c = c + i;
		}
	}
	if(c == n){
		printf("%d la so hoan hao \n",n);
	}else{
		printf("%d khong phai la so hoan hao \n",n);
	}
	return 0;
}
