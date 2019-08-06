#include <stdio.h>

int main() {
	int i, j, ar[4][4], row, col;
 	int sum = 0;

   	printf("\nNhap so hang cua ma tran: ");
   		scanf("%d", &row);

   	printf("\nNhap so cot cua ma tran: ");
   		scanf("%d", &col);

   	printf("\nNhap ma tran: \n");
   		for (i = 0; i < row; i++) {
      		for (j = 0; j < col; j++) {
        		printf("\nNhap phan tu a[%d][%d] : ", i, j);
        		 scanf("%d", &ar[i][j]);
    		  }
  		 }

  	 for (i = 0; i < row; i++) {
     	 for (j = 0; j < col; j++) {
        	 if (i == j)
           		sum = sum + ar[i][j];
   	   		}
 	  }
   printf("\nTong duong cheo cua ma tran la: %d", sum);

   return 0;
}

