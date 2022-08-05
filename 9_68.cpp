#include<stdio.h>
#include<locale.h>

int isHappyNumber(int);
int main()
{
	setlocale(LC_ALL, "Turkish");
	printf("%d\n",isHappyNumber(49));
	printf("%d\n",isHappyNumber(89));
return 0;
}

int isHappyNumber(int sayi)
{
	int toplam;
	
		while(sayi!=0)
		{
		toplam = toplam + (sayi%10)*(sayi%10);
		sayi = sayi/10;
			if(sayi==0 && toplam>=10)
			{
				sayi = toplam;
				toplam = 0;
			}
		}
	
	if(toplam==1)
		return 1;
	else
		return 0;
}
