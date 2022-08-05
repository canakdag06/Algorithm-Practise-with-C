#include<stdio.h>
#include<locale.h>

char enCokTekrarEden(char[], int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	char dizi[7] = {'p','r','o','g','r','a','m'};
	char c;
	
	c = enCokTekrarEden( dizi, 7 );
	printf("En çok tekrar eden harf = %c", c);
	return 0;
}

char enCokTekrarEden(char dizi[], int boyut)
{
	int tekrar, index, max = 0;
	for(int i=0; i<boyut; i++)
	{
		tekrar = 0;
		for(int j=0; j<boyut; j++)
		{
			if(dizi[i] == dizi[j])
				tekrar++;
		}
		if(tekrar > max)
		{
			max = tekrar;
			index = i;
		}
	}
	
	return dizi[index];
}
