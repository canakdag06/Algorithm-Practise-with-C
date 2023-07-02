#include<stdio.h>
#include<locale.h>

int main()
{
	int baslangic,bitis,toplam,n=0;
	setlocale(LC_ALL,"Turkish");
	basla:
	printf("Baþlangýç deðerini giriniz : ");
	scanf("%d",&baslangic);
	printf("Bitiþ deðerini giriniz : ");	
	scanf("%d",&bitis);
	printf("--------------------------\n");
		if(baslangic>=bitis)
		{
			printf("HATA! Bitiþ deðeri baþlangýç deðerinden küçük veya eþit olamaz.\n");
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
	printf("\nKurala uyan toplamda %d adet sayý bulunmaktadýr",n);
	printf("\nToplamlarý = %d",toplam);
}
