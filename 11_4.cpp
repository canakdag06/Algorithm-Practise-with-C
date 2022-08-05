#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	float a[6], b[6], c[12];
	
	printf("c dizisinin elemanlarýný giriniz: ");
	for(int i=0; i<12; i++)
	{
		scanf("%f",&c[i]);
	}

	printf("a dizisinin elemanlarý: ");
	for(int i=0; i<6; i++)
	{
		a[i] = c[2*i];
		printf("%.1f ",a[i]);
	}
	
	printf("\nb dizisinin elemanlarý: ");
	for(int i=0; i<6; i++)
	{
		b[i] = c[2*i +1];
		printf("%.1f ",b[i]);
	}
}
