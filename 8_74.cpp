#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi,adet,max_adet=1,max_sayi;
	
	for(int i=10;i<=50;i++)
	{
		sayi = i;
		adet = 1;
			do{
				if(sayi%2 == 0)
					sayi = sayi/2;
				else
					sayi = sayi*3+1;
			adet++;
				if(adet > max_adet)
				{
					max_adet = adet;
					max_sayi = i;
				}
			}while(sayi!=1);
	}
	printf("Aranan sayý : %d\n",max_sayi);
	printf("Collatz serisi %d adet sayýdan oluþur",max_adet);
return 0;
}
