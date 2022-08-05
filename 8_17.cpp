#include<stdio.h>
#include<locale.h>

int main()
{
	int toplam = 0, i, j, giris;
	char cinsiyet;
	setlocale(LC_ALL, "Turkish");
	printf("Maymunun cinsiyetini giriniz(Erkek E/e, Diþi D/d) : ");
	scanf("%c",&cinsiyet);
	printf("Maymun kafese kaç kez girdi? : ");
	scanf("%d",&giris);
	
	if(cinsiyet == 'E' || cinsiyet == 'e')
	{
		if(giris<5)
		{
			for(i=1;i<=giris;i++)
			{
				toplam = toplam + 2*i;
				printf("%d. giriþinde toplamda %d muz yemiþ oldu\n",i,toplam);	
			}
		}
		else
		{
			for(i=1;i<5;i++)
			{
				toplam = toplam + 2*i;
				printf("%d. giriþinde toplamda %d muz yemiþ oldu\n",i,toplam);	
			}
			toplam = 20;
			for(i=5;i<=giris;i++)
			{
				toplam = toplam + 2*((toplam-i)/2 + 1);
				printf("%d. giriþinde toplamda %d muz yemiþ oldu\n",i,toplam);
			}
		}
	}
// ------------------------------------------------------------------------------------- //	
	else if(cinsiyet == 'D' || cinsiyet == 'd')
	{
		if(giris<5)
		{
			for(i=1;i<=giris;i++)
			{
				toplam = toplam + i;
				printf("%d. giriþinde toplamda %d muz yemiþ oldu\n",i,toplam);	
			}
		}
		else
		{
			for(i=1;i<5;i++)
			{
				toplam = toplam + i;
				printf("%d. giriþinde toplamda %d muz yemiþ oldu\n",i,toplam);	
			}
			toplam = 10;
			for(i=5;i<=giris;i++)
			{
				toplam = toplam + (toplam-i)/2 + 1;
				printf("%d. giriþinde toplamda %d muz yemiþ oldu\n",i,toplam);
			}
		}
	}
return 0;
}
