#include<stdio.h>

int kacTaneVar(int[], int, int[], int);

int main()
{
	int dizi1[7]={3, 12, 1, 12, 7, 3, 12};
	int dizi2[3]={ 3, 12, 41}, c;
	
	c = kacTaneVar(dizi1, 7, dizi2, 2);
	printf("Sonuç = %d ", c);
	return 0;
}

int kacTaneVar(int dizi1[], int boyut1, int dizi2[], int boyut2)
{
	int sayac = 0;
	for(int i=0; i<boyut2; i++)
	{
		for(int j=0; j<boyut1; j++)
		{
			if(dizi2[i] == dizi1[j])
			{
				sayac++;
				break;
			}
		}
	}
	return sayac;
}
