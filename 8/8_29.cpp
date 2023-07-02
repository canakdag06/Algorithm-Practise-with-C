#include<stdio.h>
#include<locale.h>

int main()
{
	int yas,min=999,n=1;
	setlocale(LC_ALL,"Turkish");
	
	while(1)
	{
		basla:
		printf("Yaþý giriniz (Durdurmak için 0): ");
		scanf("%d",&yas);
		if(yas<=0 || yas>999)
		{
			if(yas!=0)
			{
			printf("HATA!!! Lütfen yaþ deðerine dikkat ediniz.\n");
			goto basla;
			}
			else
			goto sonuc;
		}
			if(yas==min)
			n++;
		if(yas<min)
		min = yas;
	}
	sonuc:
	printf("\nEn genç katýlýmcý yaþý %d\n( Bu yaþta toplam %d kiþi giriþ yaptý)",min,n);
}
