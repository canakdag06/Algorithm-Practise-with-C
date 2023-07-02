#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	int ilk,yeni;
	printf("Baþlangýç sayýsýný giriniz: ");
	scanf("%d",&ilk);
	
	while(1)
	{
		printf("Bir sayý giriniz(Bir önceki sayýyý girerseniz durur): ");
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
