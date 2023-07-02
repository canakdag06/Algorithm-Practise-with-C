#include<stdio.h>

void icindekileriSifirla(int[],int,int[],int);

int main()
{
	int dizi1[7] = { 3, 12, 1, 12, 7, 3, 12 };
	int dizi2[2] = { 3, 12 }, c;
	
	icindekileriSifirla(dizi1, 7, dizi2, 2);
	for(c=0; c<7; c++)
		printf("%d , \n ", dizi1[c]);
	return 0;
}

void icindekileriSifirla(int dizi1[], int boyut1, int dizi2[], int boyut2)
{
	for(int i=0; i<boyut1; i++)
	{
		if(dizi2[i] == dizi1[i])
			dizi1[i] = 0;
	}
	
	for(int j=boyut1-1; j>=0; j--)
	{
		if(dizi2[boyut2-1] == dizi1[j])
			dizi1[j] = 0;
		boyut2--;
	}
}
