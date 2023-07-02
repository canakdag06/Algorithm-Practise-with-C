#include<stdio.h>
#include<locale.h>

void ayir(float[], float);

int main()
{
	setlocale(LC_ALL, "Turkish");
	float a[5], b[5], c[10];
	float ort = 0.0;
	
	printf("a dizisinin elemanlarýný giriniz:\n");
	for(int i=0; i<5; i++)
	{
		scanf("%f", &a[i]);
		ort = ort+ a[i]/10.0;
	}
	printf("b dizisinin elemanlarýný giriniz:\n");
	for(int i=0; i<5; i++)
	{
		scanf("%f", &b[i]);
		ort = ort+ b[i]/10.0;
	}
	
	printf("Dizilerin Aritmetik Ortalamasý = %.2f", ort);
	printf("\nc dizisinin elemanlarý: ");
	
	int x=0;
	for(int i=0; i<5; i++)
	{
		if(a[i] >= ort && b[i] >= ort)
		{
			c[x] = a[i];
			printf("%.1f ",c[x]);
			c[x+1] = b[i];
			printf("%.1f ",c[x+1]);
			x = x+2;
		}
		else if(a[i] >= ort)
		{
			c[x] = a[i];
			printf("%.1f ",c[x]);
			x++;
		}
		else if(b[i] >= ort)
		{
			c[x] = b[i];
			printf("%.1f ",c[x]);
			x++;
		}
	}
	return 0;
}
