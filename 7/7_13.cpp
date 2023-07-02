#include<stdio.h>
#include<math.h> //mutlak deðerlerin alýnmasý için gereken kütüphane

int main()
{
	int a,b,c;
	printf("a,b,c uzunluklarini giriniz= ");
	scanf("%d %d %d",&a,&b,&c);
	printf("--------------------------------");
	
	int m1= b-c; // mutlak deðerlerin alýnmasý
	m1 = abs(m1); // mutlak deðer fonksiyonu
	int m2= a-c;
	m2 = abs(m2);
	int m3= a-b;
	m3 = abs(m3);
	
	if( (m1<a && a<(b+c)) || (m3<c && c<(a+b)) || (m2<b && b<(a+c)))
	{
		printf("\nBu bir ucgendir.");
		
		if((a==b) && (a==c)) // a kenarý iki kenara da eþitse üçgen eþkenardýr
		printf("\nTipi: Eskenar");
		else if((a==b) || (b==c) || (a==c))
		printf("\nTipi: Ikizkenar");
		else //diðer durumlarda üçgen çeþitkenardýr
		printf("\nTipi: Cesitkenar");
	}
	else
	printf("\nBu bir ucgen degildir.");
	return 0;
}
