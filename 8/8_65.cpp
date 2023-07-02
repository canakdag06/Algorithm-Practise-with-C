#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int model,arac,toplam=0,min=9999,max=1000;
	
	while(1)
	{
		printf("Model yýlýný giriniz (Durdurmak için 0): ");
		scanf("%d",&model);
		
		if(model == 0)
			break;
		else if(model<1000 || model>9999)
		{
			printf("Hata!!! Lütfen 4 haneli giriniz\n"); continue;
		}
		else
		{
			toplam+= model;
			arac++;
				if(model<min)
					min = model;
				else if(model>max)
					max = model;
		}
	}
	printf("-------------------------------------------------\n");
	printf("Toplam %d tane araç giriþ yaptý.\n",arac);
	printf("Ortalama = %d, Kýrpýlmýþ ortalama = %d",toplam/arac,(toplam-min-max)/(arac-2));
return 0;
}
