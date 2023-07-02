#include<stdio.h>
#include<locale.h>

int main()
{
	int mevcut=0, vize, final, f=0, c=0, b=0, a=0;
	float ort=0, genel_ort=0;
	
	setlocale(LC_ALL,"Turkish");
	printf("Sýnýf mevcudu kaçtýr?: ");
	scanf("%d",&mevcut);
	
	for(int i=1;i<=mevcut;i++)
	{
		printf("%d. öðrencinin vize ve finali: ",i);
		scanf("%d %d",&vize,&final);
		ort = (vize*0.4 + final*0.6)/25.0;
		if(ort<2)
		{
			f++;
		}
		else if(ort>=2 && ort<2.5)
		{
			c++;
		}
		else if(ort>=2.5 && ort<3.5)
		{
			b++;
		}
		else if(ort>=3.5)
		{
			a++;
		}
	genel_ort = genel_ort + ort;
	}
	printf("--------------------------------------------------\n");
	printf("%d tane F, %d tane C, %d tane B, %d tane A vardýr.\n",f,c,b,a);
	printf("Genel ortalama = %.2f",genel_ort/mevcut);
return 0;
}
