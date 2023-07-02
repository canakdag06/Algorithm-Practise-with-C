#include<stdio.h>

int main()
{
	int erkek_1 = 'e';
	int erkek_2 = 'E';
	int kiz_1 = 'k';
	int kiz_2 = 'K';
	float baba_boy, anne_boy;
	int cinsiyet;
	printf("Cocugun cinsiyetini giriniz (e-E/k-K): ");
	scanf("%c",&cinsiyet);
	
	if(cinsiyet!=erkek_1 && cinsiyet!=erkek_2 && cinsiyet!=kiz_1 && cinsiyet!=kiz_2)
	{
		printf("HATA! Mevcut cinsiyet harflerinden baska bir harf girdiniz.");
		return 0;
	}
	
	printf("Babasinin boyu (m): ");
	scanf("%f",&baba_boy);
	printf("Annesinin boyu (m): ");
	scanf("%f",&anne_boy);
	printf("----------------------------------");
	float kiz_hedef = (baba_boy + anne_boy-0.13)/2.0;
	float erkek_hedef = (baba_boy + anne_boy +0.13)/2.0;
	
		if(cinsiyet== erkek_1 ||cinsiyet== erkek_2)   /*bu if ler switch/case kullanarak 
		daha kolay þekilde kodlanabilir ama kitapta if kullanmamýzý
		istediði için kullanmadým.*/
		{
			if(erkek_hedef<1.75)
			printf("\nHedef boy: %.2f\nTurkiye ortalamasindan kisa olacak.",erkek_hedef);
			
			if(erkek_hedef>=1.75 && erkek_hedef<=1.76)
			printf("\nHedef boy: %.2f\nTurkiye ortalamasinda olacak.",erkek_hedef);
			
			if(erkek_hedef>1.76)
			printf("\nHedef boy: %.2f\nTurkiye ortalamasindan uzun olacak.",erkek_hedef);
		return 0;
		}
		
		if(cinsiyet== kiz_1 || cinsiyet== kiz_2)
		{
			if(kiz_hedef<1.63)
			printf("\nHedef boy: %.2f\nTurkiye ortalamasindan daha kisa olacak.",kiz_hedef);
			
			if(kiz_hedef>=1.63 && kiz_hedef<=1.64)
			printf("\nHedef boy: %.2f\nTurkiye ortalamasinda olacak.",kiz_hedef);
			
			if(kiz_hedef>1.64)
			printf("\nHedef boy: %.2f\nTurkiye ortalamasindan uzun olacak.",kiz_hedef);
		return 0;
		}
}
