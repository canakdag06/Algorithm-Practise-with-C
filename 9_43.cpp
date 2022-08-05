#include<stdio.h>
int sagdanenbuyuk(int);

int main()
{
	printf("\n%d",sagdanenbuyuk(54572));
	printf("\n%d",sagdanenbuyuk(666));
return 0;
}

int sagdanenbuyuk(int sayi)
{
	int basamak,save,sayac=0;
	int max = 0;
	
	while(sayi!=0)
	{
		basamak = sayi%10;
		sayi = sayi/10;
		sayac++;
			if(basamak>max)
			{
				max = basamak;
				save = sayac;
			}
	}
	return save;
}
