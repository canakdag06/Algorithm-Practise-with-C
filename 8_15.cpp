#include<stdio.h>
#include<locale.h>

int main()
{
	int i, j, flag;
	setlocale(LC_ALL, "Turkish");
	printf("1 ile 20 aras�ndaki asal say�lar");
	printf("\n-------------------------------\n");
	
	for(i=2;i<=20;i++)
	{
		flag = 1;
		for(j=2;j<=i-1;j++)  //asal say�lar 1'e b�l�nd��� i�in 2'den ba�latt�k, kendisine b�l�nd���n i�in i-1'de bitirdik.
		{
			if(i%j==0)
			{
			flag = 0;
			break;
			}
		}
		if(flag == 1)
		printf("%d ",i);
	}
return 0;
}
