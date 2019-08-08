#include <stdio.h>
#include <stdlib.h>

int main(){
	int hang,cot;
	int *p;
	printf("nhap hang :\n");
	scanf("%d",&hang);
	printf("nhap cot : \n");
	scanf("%d",&cot);	
	p = (int*)malloc(hang * cot *sizeof(int));
	int i,j;
	for (i = 0; i < hang; ++i){
		for(j = 0; j < cot; ++j){
			scanf("%d",(p + cot * i + j));
			}
		}
	int max = 0;
	for(j = 0; j < cot; ++j){
		int tong = 0;
		for(i = 0; i <  hang; ++i){
			tong = tong +* (p + cot * i + j); 
			}
		if(tong > max){
			max = tong;
			}
		}
		printf("tong lon nhat la: %d\n",max);
	
	return 0;
}
