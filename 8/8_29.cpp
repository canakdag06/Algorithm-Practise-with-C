#include<stdio.h>
#include<locale.h>

int main()
{
	int yas,min=999,n=1;
	setlocale(LC_ALL,"Turkish");
	
	while(1)
	{
		basla:
		printf("Ya�� giriniz (Durdurmak i�in 0): ");
		scanf("%d",&yas);
		if(yas<=0 || yas>999)
		{
			if(yas!=0)
			{
			printf("HATA!!! L�tfen ya� de�erine dikkat ediniz.\n");
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
	printf("\nEn gen� kat�l�mc� ya�� %d\n( Bu ya�ta toplam %d ki�i giri� yapt�)",min,n);
}
