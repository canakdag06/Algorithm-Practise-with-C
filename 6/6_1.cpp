#include<stdio.h>
#include<math.h>

int main()
{
	int yukseklik,cap;
	printf("Yuksekligi giriniz ->");
	scanf("%d",&yukseklik);
	printf("Capi giriniz ->");
	scanf("%d",&cap);
	printf("Girdi Degerleri: Yukseklik %d ve cap %d",yukseklik,cap);
	float hacim = ((3.1419)*(cap/2)*(cap/2)*yukseklik)/3;
	printf("\nDairesel Koninin Hacmi = %.2f cm kuptur.",hacim);
	return 0;
}
