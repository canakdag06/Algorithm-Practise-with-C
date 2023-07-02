#include<stdio.h>
#include<locale.h>
#include<math.h>

int enBuyukKupunuDolduran(int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	printf("%d\n", enBuyukKupunuDolduran( 3 ));
	printf("%d\n", enBuyukKupunuDolduran( 4 ));
return 0;
}

int enBuyukKupunuDolduran(int basamak)
{
	int max=0;
	for(int i=pow(10,basamak-1) ; i<pow(10,basamak) ; i++)
	{
		int temp = i;
		int carpim=1,toplam=0;
		while(temp!=0)
		{
			toplam = toplam+temp%10;
			temp = temp/10;
		}
		if(i == pow(toplam,3))
			max = i;
	}
return max;
}
