#include<stdio.h>

int main()
{
	float ales, dil, not_ort;
	printf("ALES puanini giriniz: ");
	scanf("%f",&ales);
	printf("Yabanci dil puanini giriniz: ");
	scanf("%f",&dil);
	printf("Mezuniyet not ortalamasi: ");
	scanf("%f",&not_ort);
	printf("------------------------------");
	float siralama_p= ales*0.5 + dil*0.25 + not_ort*0.25;
	printf("\nSiralama puaniniz: %.2f",siralama_p);
	
	if(siralama_p>=60)
		printf("\nSiralamaya girebilir");
	else
		printf("\nSiralamaya giremez");
	return 0;
}
