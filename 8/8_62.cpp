#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	int yas,izleyici,toplam=0,min=100,max=0;
	while(1)
	{
		printf("Yaþý giriniz (Durdurmak için 0): ");
		scanf("%d",&yas);
		
		if(yas==0)
			break;
		else if(yas<0 || yas>99)
		{
			printf("Hata!!! Lütfen yaþ deðerine dikkat ediniz.\n"); continue;
		}
		else
		{
			toplam+= yas;
			izleyici++;
				if(yas<min)
					min = yas;
				else if(yas>max)
					max = yas;
		}
	}
	
	printf("-------------------------------------------------\n");
	printf("Toplam %d tane izleyici giriþ yaptý.\n",izleyici);
	printf("Ortalama = %d, Kýrpýlmýþ ortalama = %d",toplam/izleyici,(toplam-min-max)/(izleyici-2));
return 0;
}
