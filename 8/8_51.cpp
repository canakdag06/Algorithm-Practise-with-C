#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	int tekrar;
	float sayi,toplam=0.0;
	
	while(1)
	{
		printf("�l��m say�s�: ");
		scanf("%d",&tekrar);
		if(tekrar==0)
		{
			break;
		}
			while(tekrar>0)
			{
				printf("�l��m giriniz: ");
				scanf("%f",&sayi);
				toplam += sayi;
				tekrar--;
			}
			printf("Ara Toplam = %.1f\n",toplam);
	}
		printf("Genel Toplam = %.1f",toplam);
	
		
return 0;
}
