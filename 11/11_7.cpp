#include<stdio.h>
#include<locale.h>

void ayir(float[], float);

int main()
{
	setlocale(LC_ALL, "Turkish");
	float c[10];
	float ort = 0.0;
	
	printf("c dizisinin elemanlarýný giriniz:\n");
	for(int i=0; i<10; i++)
	{
		scanf("%f", &c[i]);
		ort = ort+ c[i];
	}
	ort = ort/10.0;
	printf("Dizinin Aritmetik Ortalamasý = %.2f", ort);
	ayir(c, ort);
	return 0;
}

void ayir(float c[], float ort)
{	
	float a[10]={0}, b[10]={0};
	int x=0, y=0;
	for(int i=0; i<10; i++)
	{
		if(c[i] >= ort)
		{
			a[x] = c[i];
			x++;
		}
		else
		{
			b[y] = c[i];
			y++;
		}
	}
	
	printf("\na dizisinin elemanlarý(Ortalamadan büyükler):\n");
	for(int i=0; i<10; i++)
	{
		if(a[i] != 0.0)
			printf("%.1f ", a[i]);
	}
	
	printf("\nb dizisinin elemanlarý(Ortalamadan küçükler):\n");
	for(int i=0; i<10; i++)
	{
		if(a[i] != 0.0)
			printf("%.1f ", b[i]);
	}
}
