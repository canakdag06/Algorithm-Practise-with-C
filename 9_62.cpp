#include<stdio.h>
#include<locale.h>
float lirayacevir(int,int,int,int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	int para10,para100,kurus10,kurus25;
	char devam;
	do
	{
	printf("\n10 Para, 100 Para, 10 Kuruş ve 25 Kuruş miktarını giriniz: ");
	scanf("%d %d %d %d",&para10,&para100,&kurus10,&kurus25);
	printf("-------------------------------------------------------------\n");
	printf("Toplam = %.2f TL\n",lirayacevir(para10,para100,kurus10,kurus25));
	printf("Devam etmek istiyor musunuz? (E,e / H,h) : ");
	scanf("%s",&devam);
	}
	while(devam == 'E' || devam == 'e');
return 0;
}

float lirayacevir(int para10,int para100,int kurus10,int kurus25)
{
	float toplam = 0;
	toplam = para10*0.25 + para100*2.5 + kurus10*10 + kurus25*25;
	return toplam/100;
}
