#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");		// Sorudaki örüntüye dikkat et. A dizisindeki sayýlarý C'deki 2 katýndaki indekse,
										// B dizisindeki sayýlar C'deki 2katýnýn 1 fazlasýna atýlýyor.
	float a[6], b[6], c[12];
	
	printf("a dizisinin elemanlarýný giriniz: ");
	for(int i=0; i<6; i++)
	{
		scanf("%f",&a[i]);
		c[2*i] = a[i];
	}
	
	printf("b dizisinin elemanlarýný giriniz: ");
	for(int i=0; i<6; i++)
	{
		scanf("%f",&b[i]);
		c[2*i+1] = b[i];
	}
	
	printf("c dizisinin elemanlarý:\n");
	for(int i=0; i<12; i++)
	{
		printf("%.1f ", c[i]);
	}
}
