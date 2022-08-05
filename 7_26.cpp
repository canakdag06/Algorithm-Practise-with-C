#include<stdio.h>

int main()
{
	float not_1,not_2,not_3,ort_1,ort_2,ort_3,sapma_1,sapma_2,sapma_3;
	printf("Birinci dersin basari notu, sinif ortalamasi ve sapmayi giriniz : ");
	scanf("%f %f %f",&not_1,&ort_1,&sapma_1);
	printf("Ikinci dersin basari notu, sinif ortalamasi ve sapmayi giriniz : ");
	scanf("%f %f %f",&not_2,&ort_2,&sapma_2);
	printf("Ucuncu dersin basari notu, sinif ortalamasi ve sapmayi giriniz : ");
	scanf("%f %f %f",&not_3,&ort_3,&sapma_3);
	printf("----------------------------------------------------------------");
	
	float standart_1 = (not_1 - ort_1)/sapma_1;
	float standart_2 = (not_2 - ort_2)/sapma_2;
	float standart_3 = (not_3 - ort_3)/sapma_3;
	
	if(standart_1 >= standart_2 && standart_1 >= standart_3)
	printf("\nEn basarili olunan ders 1. derstir. (Standart not = %.2f)",standart_1);
	else if(standart_2 >= standart_1 && standart_2 >= standart_3)
	printf("\nEn basarili olunan ders 2. derstir. (Standart not = %.2f)",standart_2);
	else
	printf("\nEn basarili olunan ders 3. derstir. (Standart not = %.2f)",standart_3);
	return 0;
}
