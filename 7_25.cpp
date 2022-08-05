#include<stdio.h>

int main()
{
	float ic_1,ic_2,ic_3,dis_1,dis_2,dis_3;
	printf("Birinci aracin sehir ici ve disi tuketim miktarini giriniz: ");
	scanf("%f %f",&ic_1,&dis_1);
	printf("Ikinci aracin sehir ici ve disi tuketim miktarini giriniz: ");
	scanf("%f %f",&ic_2,&dis_2);
	printf("Ucuncu aracin sehir ici ve disi tuketim miktarini giriniz: ");
	scanf("%f %f",&ic_3,&dis_3);
	printf("---------------------------------------------------------");
	float ort_1 = ic_1*0.55 + dis_1*0.45;
	float ort_2 = ic_2*0.55 + dis_2*0.45;
	float ort_3 = ic_3*0.55 + dis_3*0.45;
	
	if(ort_1 <= ort_2 && ort_1 <= ort_3)
	printf("\nEn az yakit harcayani 1. aractir.\n(Ortalama yakit tuketimi= %.2f)",ort_1);
	else if(ort_2 <= ort_1 && ort_2 <= ort_3)
	printf("\nEn az yakit harcayani 2. aractir.\n(Ortalama yakit tuketimi= %.2f)",ort_2);
	else
	printf("\nEn az yakit harcayani 3. aractir.\n(Ortalama yakit tuketimi= %.2f)",ort_3);

}
