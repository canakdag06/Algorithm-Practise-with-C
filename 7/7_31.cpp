#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	char harf;
	printf("Rakam�n ba� harfini giriniz: ");
	scanf("%c",&harf);
	printf("----------------------------");
	
		if(harf == 'o' || harf == 'O')
		printf("\nOne-Bir-1");
		else if(harf == 't' || harf == 'T')
		printf("\nThree-��-3");
		else if(harf == 'f' || harf == 'F')
		printf("\nFive-Be�-5");
		else if(harf == 's' || harf == 'S')
		printf("\nSeven-Yedi-7");
		else if(harf == 'n' || harf == 'N')
		printf("\nNine-Dokuz-9");
	return 0;
}
