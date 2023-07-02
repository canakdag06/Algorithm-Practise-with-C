#include<stdio.h>
#include<locale.h>

int main()
{
	int model, max=0,n=1; // baþta max'a 1000den küçük herhangi bir deðer verebiliriz. n deðiþkeni max deðerin
	//kaç tane olduðunu sayacak. kodu incelersen, max deðerin ilk kez girildiðinde max deðer olarak alýnýp n'yi
	//arttýrmayacaðýný görebilirsin. bu yüzden n'yi 1den baþlattýk.
	setlocale(LC_ALL,"Turkish");
	
	while(1)
	{
		basla:
		printf("Model yýlýný giriniz (Durdurmak için 0): ");
		scanf("%d",&model);
			if(model<1000 || model>9999)
			{
				if(model!=0)
				{
				printf("HATA!!! Lütfen 4 haneli deðer giriniz.\n");
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
	printf("\nEn yeni model %d (Toplam %d tane giriþ yaptý)",max,n);
}
