#include<stdio.h>
#include<locale.h>
int okek(int,int);
int main()
{
	setlocale(LC_ALL, "Turkish");	// 8_52'deki algoritmanın aynısı.
	printf("%d",okek(24,32));
return 0;
}

int okek(int sayi1,int sayi2)
{
	int sayi1_ilk = sayi1;
	int sayi2_ilk = sayi2;
	
	while(sayi1 != sayi2)
	{
		if(sayi1 > sayi2)
			sayi1 = sayi1 - sayi2;
		else
			sayi2 = sayi2 - sayi1;
	}
return (sayi1_ilk*sayi2_ilk)/sayi1;
}
