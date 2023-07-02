#include<stdio.h>
#include<locale.h>
#include<string.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	int araclar[4] = {0,0,0,0};
	float tutarlar[4] = {0,0,0,0};
	int marka,max_arac,max_tutar;
	float tutar;
	printf("PROGRAMDAN ÇIKMAK ÝÇÝN MARKA OLARAK 111 GÝRÝNÝZ\n");
	while(1)
	{
		printf("Marka, tutar giriniz: ");
		scanf("%d %f",&marka,&tutar);
		
		if(marka==111)
		{
			break;
		}
		else if(marka==1)
		{
			araclar[0] = araclar[0] + 1;
			tutarlar[0] += tutar;
		}
		else if(marka==2)
		{
			araclar[1] = araclar[1] + 1;
			tutarlar[1] += tutar;
		}
		else if(marka==3)
		{
			araclar[2] = araclar[2] + 1;
			tutarlar[2] += tutar;
		}
		else if(marka==4)
		{
			araclar[3] = araclar[3] + 1;
			tutarlar[3] += tutar;
		}
		else
		{
			printf("Geçersiz marka girdiniz.\n");
			continue;
		}
	}
	printf("PROGRAM SONA ERDÝ\n");
	printf("ÖZET BÝLGÝLER\n");
	int temp_arac = 0;
	float temp_tutar = 0;
		for(int i=0;i<4;i++)
		{
       		if(araclar[i] > temp_arac)
			{
            	max_arac = i;
            	temp_arac = araclar[i];
        	}
        	if(tutarlar[i] > temp_tutar)
        	{
        		max_tutar = i;
        		temp_tutar = tutarlar[i];
			}
		}
		switch(max_arac)
		{
			case 0: printf("En çok gelen araç markasý Renault (%d kez)\n",araclar[max_arac]); break;
			case 1: printf("En çok gelen araç markasý Mazda (%d kez)\n",araclar[max_arac]); break;
			case 2: printf("En çok gelen araç markasý Honda (%d kez)\n",araclar[max_arac]); break;
			case 3: printf("En çok gelen araç markasý Ford (%d kez)\n",araclar[max_arac]); break;
		}
		
		switch(max_tutar)
		{
			case 0: printf("En çok satýþ yapýlan marka Renault (%.2f TL)",tutarlar[max_tutar]); break;
			case 1: printf("En çok satýþ yapýlan marka Mazda (%.2f TL)",tutarlar[max_tutar]); break;
			case 2: printf("En çok satýþ yapýlan marka Honda (%.2f TL)",tutarlar[max_tutar]); break;
			case 3: printf("En çok satýþ yapýlan marka Ford (%.2f TL)",tutarlar[max_tutar]); break;
		}
return 0;
}
