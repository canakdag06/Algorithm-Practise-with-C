#include<stdio.h>
#include<locale.h>

int main()
{
	int baslangic, bitis, i, n=0;
	setlocale(LC_ALL,"Turkish");
	printf("Ba�lang�� y�l�n� giriniz : ");
	scanf("%d",&baslangic);
	printf("Biti� y�l�n� giriniz : ");
	scanf("%d",&bitis);
	printf("--------------------------\n");
	
		for(i=baslangic;i<=bitis;i++)
		{
			if(i%4 == 0)
			{
			printf("%d ",i);
			n++;
			}
		}
	printf("\nToplam %d adet",n);
return 0;
}
