#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	int ilk,yeni;
	printf("Ba�lang�� say�s�n� giriniz: ");
	scanf("%d",&ilk);
	
	while(1)
	{
		printf("Bir say� giriniz(Bir �nceki say�y� girerseniz durur): ");
		scanf("%d",&yeni);
		if(yeni==ilk)
		{
			break;	
		}
			if(ilk<yeni)
			{
				printf("ARTIYOR\n");
			}
			else if(ilk>yeni)
			{
				printf("AZALIYOR\n");
			}
		ilk = yeni;
	}
	
return 0;
}
