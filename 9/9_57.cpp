#include<stdio.h>
#include<locale.h>
int obeb(int,int);
int main()
{
	setlocale(LC_ALL, "Turkish");	// 8_50'deki algoritmanın aynısı.
	printf("%d",obeb(24,32));
return 0;
}

int obeb(int sayi1,int sayi2)
{
	int sayi1_ilk,sayi2_ilk;
	sayi1_ilk = sayi1;
	sayi2_ilk = sayi2;
	
	while(sayi1 != sayi2)
	{
		if(sayi1 > sayi2)
			sayi1 = sayi1 - sayi2;
		else
			sayi2 = sayi2 - sayi1;
	}
return sayi1;
}
