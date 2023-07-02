#include<stdio.h>
int main()
{
	int sayi;
	printf("Cozumlenecek sayi (max 4 haneli) = ");
	scanf("%d",&sayi);
	printf("Verilen %d sayisinda:",sayi);
	printf("\n%d tane binlik",sayi/1000);
	printf("\n%d tane yuzluk",(sayi%1000)/100);
	printf("\n%d tane onluk",(sayi%100)/10);
	printf("\n%d tane de birlik vardir",sayi%10);
}
