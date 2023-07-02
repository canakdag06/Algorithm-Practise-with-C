#include<stdio.h>
int kontrol(int,int);

int main()
{
	printf("%d",kontrol(220,284));
return 0;
}

int kontrol(int sayi1,int sayi2)
{
		int toplam_1=0,toplam_2=0;
		for(int i=1;i<sayi1;i++)
		{
			if(sayi1%i == 0)
				toplam_1 = toplam_1 + i;
		}
		for(int i=1;i<sayi2;i++)
		{
			if(sayi2%i == 0)
				toplam_2 = toplam_2 + i;
		}
		
		if(toplam_1 == sayi2 && toplam_2 == sayi1)
			return 1;
		else
			return 0;
}
