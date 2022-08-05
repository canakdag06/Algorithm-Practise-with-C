#include<stdio.h>

int main()
{
	int ilk,son;
	printf("Ilk gostergeyi giriniz: ");
	scanf("%d",&ilk);
	printf("Son gostergeyi giriniz: ");
	scanf("%d",&son);
	
	if(ilk<0 || son<0)
		{
		printf("HATA! Negatif deger girdiniz.");
		return 0;
		}
		
	if(ilk>son)
		{
		printf("HATA! Ilk deger son degerden buyuk olamaz.");
		return 0;
		}
	printf("--------------------------");
	printf("\nTuketim miktari      : %d",son-ilk);
	printf("\nTuketim tutari       : %.2f",(son-ilk)*0.912857);
	printf("\nAtik su bedeli (%%50) : %.2f",(son-ilk)*0.912857*0.50);
	printf("\nTOPLAM               : %.2f TL",(son-ilk)*0.912857+(son-ilk)*0.912857*0.50);
}
