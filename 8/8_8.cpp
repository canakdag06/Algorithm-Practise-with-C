#include<stdio.h>
#include<locale.h>

int main()
{
	int x, n=0;
	setlocale(LC_ALL, "Turkish");
	printf("Halley y�ld�z�n�n g�r�lebilece�i y�llar : ");

	for(x=1986;x<=(1986+75*19);x=x+75)
	{
		printf("%d ",x);
		if(x>=2000 && x<3000)
		n++;
	}
	printf("\nHalley y�ld�z� 2000'li y�llarda %d kez g�r�lebilir",n);
return 0;
}
