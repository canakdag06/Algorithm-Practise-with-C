#include<stdio.h>
#include<locale.h>

int main()
{
	int baslangic,bitis,toplam,n=0;
	setlocale(LC_ALL,"Turkish");
	basla:
	printf("Ba�lang�� de�erini giriniz : ");
	scanf("%d",&baslangic);
	printf("Biti� de�erini giriniz : ");	
	scanf("%d",&bitis);
	printf("--------------------------\n");
		if(baslangic>=bitis)
		{
			printf("HATA! Biti� de�eri ba�lang�� de�erinden k���k veya e�it olamaz.\n");
			goto basla;
		}
	
	for(int i=baslangic;i<=bitis;i++)
	{
		if(i%3==0 || i%11==0)
		{
			printf("%d ",i);
			n++;
			toplam = toplam + i;
		}
	}
	printf("\nKurala uyan toplamda %d adet say� bulunmaktad�r",n);
	printf("\nToplamlar� = %d",toplam);
}
