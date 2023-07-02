#include<stdio.h>

int main()
{
	int x1,x2,y1,y2;
	printf("Ilk noktanin x1 ve y1 degerini sirasiyla giriniz:");
	scanf("%d %d",&x1,&y1);
	printf("Ikinci noktanin x2 ve y2 degerini sirasiyla giriniz:");
	scanf("%d %d",&x2,&y2);
	printf("--------------------------");
	printf("\n     %d + %d      %d",x1,x2,x1+x2);
	printf("\nx0= ---------= ------- = %.1f",(float)(x1+x2)/2);
	printf("\n       2         2\n");
	
	printf("\n     %d + %d       %d",y1,y2,y1+y2);
	printf("\nx0= ---------= ------- = %.1f",(float)(y1+y2)/2);
	printf("\n        2         2");
}
