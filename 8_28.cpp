#include<stdio.h>
#include<locale.h>

int main()
{
	int model, max=0,n=1; // ba�ta max'a 1000den k���k herhangi bir de�er verebiliriz. n de�i�keni max de�erin
	//ka� tane oldu�unu sayacak. kodu incelersen, max de�erin ilk kez girildi�inde max de�er olarak al�n�p n'yi
	//artt�rmayaca��n� g�rebilirsin. bu y�zden n'yi 1den ba�latt�k.
	setlocale(LC_ALL,"Turkish");
	
	while(1)
	{
		basla:
		printf("Model y�l�n� giriniz (Durdurmak i�in 0): ");
		scanf("%d",&model);
			if(model<1000 || model>9999)
			{
				if(model!=0)
				{
				printf("HATA!!! L�tfen 4 haneli de�er giriniz.\n");
				goto basla;
				}
			else
			goto sonuc;
			}
		if(model==max)
		n++;
		if(model>max)
		max = model;
	}
	sonuc:
	printf("\nEn yeni model %d (Toplam %d tane giri� yapt�)",max,n);
}
