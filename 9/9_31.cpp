#include<stdio.h>
#include<locale.h>
#include<math.h>
int daireselMi(int);

int main()		// Bu sorunun algoritmasýný internetten aldým. kaynak: donanýmhaber
{
	setlocale(LC_ALL, "Turkish");
	printf("1. satýr= %d \n",daireselMi(102564));
	printf("2. satýr= %d \n",daireselMi(123456));
return 0;
}

int daireselMi(int sayi)
{
	int basamak = 0;
	int birler = sayi%10;	// Sayýnýn birler basamaðýný bul.
	int temp = sayi;	// Sayýnýn deðiþmemesi için iþlemleri geçici bir deðiþken üzerinde yap.
	while(temp!=0)
	{
		temp = temp/10;	// Sayýnýn basamak sayýsýný bul.
		basamak++;
	}
	temp = sayi;
	temp = temp/10; // Sayýdan birler basamaðýný çýkar.(10'a böldüðümüzde sayý float olmadýðý için birler basamaðý yok olacak)
	temp = temp + birler*pow(10,basamak-1); // Sayýya birler basamaðý çarpý 10 üzeri sayýnýn basamak sayýsýný ekle.
	if(temp == sayi*birler) // Eðer sayý çarpý birler basamaðý son bulduðumuzla eþitse 1, deðilse 0 döndür.
		return 1;
	else
		return 0;
}
