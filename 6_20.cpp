#include<stdio.h>

int main()
{
	int ilk,son;
	printf("Ilk endeksi giriniz:");
	scanf("%d",&ilk);
	printf("Son endeksi giriniz:");
	scanf("%d",&son);
	printf("---------------------");
	printf("\nTuketim miktari (Son endeks - ilk endeks):%d",son-ilk);
	//float tutar = (son-ilk)*0.159838
	printf("\nTuketim tutari : %.2f",(son-ilk)*0.159838);
	printf("\nKDV(%%22)       : %.3f",(son-ilk)*0.159838*0.22);
	printf("\n---------------------");
	printf("\nTOPLAM : %.3f",((son-ilk)*0.159838)+((son-ilk)*0.159838*0.22));
	return 0;
}
