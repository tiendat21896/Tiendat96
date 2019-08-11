#include <stdio.h>
#include <string.h>

//1. Nhap vào 2 chuoi s1, s2. Kiem tra xem chuoi s1 có chua chuoi s2 hay không?
int main(){
    char s1[20],s2[10];
   
    printf("Nhap chuoi thu nhat : ");
    scanf("%s",s1);
    printf("Nhap chuoi thu hai : ");
    scanf("%s",s2);
 
    int i = 0, j = 0;
    int flag = 0;
 
    while (s1[i] != 0)
    {
        if (s1[i] == s2[j])
        {
            j++;
            if (s2[j] == 0)
            {
                flag = 1;
                break;
            }
        }
        else
            j = 0;
 
        i++;
    }
 
    if (flag)
        printf("Chuoi thu hai nam trong chuoi thu nhat\n");
    else
        printf("Chuoi thu hai khong nam trong chuoi thu nhat\n");
// viet chuong trinh tren thanh ham rieng
	
 
    return 0 ;
}
