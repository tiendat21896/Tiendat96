#include <stdio.h>

int main() {
   int array[4] = {0, 1, 2, 3,};
   int loop, largest;

   largest = array[0];
   
   printf("Chuong trinh tim phan tu lon nhat cua mang:\n\n"); 
   for(loop = 1; loop < 4; loop++) {
      if( largest < array[loop] ) 
         largest = array[loop];
   }
   
   printf("Phan tu lon nhat cua mang la: %d", largest);   
   
   return 0;
}

