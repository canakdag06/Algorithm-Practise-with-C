#include<stdio.h>

int main()
{
	float basari,ort,sapma;
	printf("Basari notu, sinif ortalamasi ve standart sapmayi giriniz: ");
	scanf("%f %f %f",&basari,&ort,&sapma);
	printf("----------------------------------------------------------");	
	float nott = (basari-ort)/sapma;

	if(nott>=2)
	printf("\nStandart Not = %.2f \nHarf Notu = A",nott);
	else if(nott>=1 && nott<2)
	printf("\nStandart Not = %.2f \nHarf Notu = B",nott);
	else if(nott>=0 && nott<1)
	printf("\nStandart Not = %.2f \nHarf Notu = C",nott);
	else if(nott<=0)
	printf("\nStandart Not = %.2f \nHarf Notu = F",nott);
return 0;
}
