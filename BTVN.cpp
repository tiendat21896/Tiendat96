#include <stdio.h>
#include <math.h>

	int main(){
		
		float a,b,c, delta;
		printf("nhap a != 0,b,c:");
		scanf("%d%d%d",&a,&b,&c);
		if(a == 0){
			printf("nhap lai a != 0");
			scanf("%d",&a);
		}
		if (a == 0){
			printf("nhap lai a != 0");
			scanf("%d",&a);
		}
		delta = b*b-4*a*c;
		
		if(delta < 0) printf("pt vo nghiem");
		else if(delta == 0) printf("pt co nghiem kep x =%d, -b/(2*a));
			else printf("Pt co nghiem x1 =%d\nx2 = %d",
			(-b-sqrt(delta))/(2*a), (-b-sqrt(delta))/(2*a))
			
		return 0;
	}
