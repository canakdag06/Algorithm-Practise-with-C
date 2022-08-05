#include<stdio.h>

int main()
{
	float yakit,lt_fiyat;
	int yol;
	printf("Km basina yakit tuketimi(lt) ->");
	scanf("%f",&yakit);
	printf("1 lt yakitin fiyati(TL) ->");
	scanf("%f",&lt_fiyat);
	printf("Aracin katettigi toplam yol(km) ->");
	scanf("%d",&yol);
	printf("------------------------------");
	float toplam = yakit*lt_fiyat*yol;
	printf("\nToplam yakit gideri -> %.2f",toplam);
}
