#include <stdio.h>

int main(){
	int n;
	printf("n :");
	scanf("%d",&n);
	int arr[n];
	
	for(int i = 0; i < n; ++i){
		printf("arr[%d] = ",i);
		scanf("%d", &arr[i]);
	for(int j = 0;j < i;++j){
		if(arr[i]==arr[j]){
			--i;
			break;
			}
		}
	}
	printf("ket qua :");
	for(int i = 0; i < n; ++i){
		printf("%d",arr[i]);
		}
		
	return 0;
}
