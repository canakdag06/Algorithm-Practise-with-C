#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int kisi;
	float carpim = 1.0;
	printf("Ki�i say�s� giriniz: ");
	scanf("%d",&kisi);
	
	for(int i=2;i<=kisi;i++)
	{
		carpim = carpim*((366.0-i+1.0)/366.0);
	}
	printf("�ki ki�inin do�um g�nlerinin ayn� g�n olma ihtimali = %.5f",(float)(1.0-carpim));
return 0;
}
