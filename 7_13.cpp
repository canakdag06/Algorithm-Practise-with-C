#include<stdio.h>
#include<math.h> //mutlak de�erlerin al�nmas� i�in gereken k�t�phane

int main()
{
	int a,b,c;
	printf("a,b,c uzunluklarini giriniz= ");
	scanf("%d %d %d",&a,&b,&c);
	printf("--------------------------------");
	
	int m1= b-c; // mutlak de�erlerin al�nmas�
	m1 = abs(m1); // mutlak de�er fonksiyonu
	int m2= a-c;
	m2 = abs(m2);
	int m3= a-b;
	m3 = abs(m3);
	
	if( (m1<a && a<(b+c)) || (m3<c && c<(a+b)) || (m2<b && b<(a+c)))
	{
		printf("\nBu bir ucgendir.");
		
		if((a==b) && (a==c)) // a kenar� iki kenara da e�itse ��gen e�kenard�r
		printf("\nTipi: Eskenar");
		else if((a==b) || (b==c) || (a==c))
		printf("\nTipi: Ikizkenar");
		else //di�er durumlarda ��gen �e�itkenard�r
		printf("\nTipi: Cesitkenar");
	}
	else
	printf("\nBu bir ucgen degildir.");
	return 0;
}
