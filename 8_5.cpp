#include<stdio.h>
#include<locale.h>

int main()
{
	int i, baslangic, bitis, n=0;
	setlocale(LC_ALL, "Turkish");
	printf("Ba�lang�� ve biti� de�erini giriniz: ");
	scanf("%d %d",&baslangic,&bitis);
	printf("Say�lar �unlard�r: ");
	for(i=baslangic;i<=bitis;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
			n++;
		}
	}
		printf("(Toplam %d adet)",n);
return 0;
}
