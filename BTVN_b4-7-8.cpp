#include <stdio.h>

int max(int arr[],int n){
	int max = arr[0];
	for(int i = 1;i < n; ++i)
		if(arr[i]> max)max = arr[i];
	return max;	
}

int main(){
	int arr[10],n;
	scanf("%d",&n);
	for(int i = 0; i < n; ++i){
		scanf("%d",&arr[i]);
		}
	printf("\nmax = %d",max(arr,n));
	return 0;
}
