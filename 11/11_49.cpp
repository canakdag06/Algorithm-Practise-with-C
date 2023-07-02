#include<stdio.h>

void ekle(int[],int,int);

int main()
{
	int dizi[10] = {53,47,45,40,10,8,7,3,0,0};
	int yeni;
	printf("Sayiyi girin: ");
	scanf("%d",&yeni);
	ekle(dizi,10,yeni);
	for(int i=0; i<10; i++)
		printf("%d ",dizi[i]);
	return 0;
}

void ekle(int dizi[], int boyut, int yeni)
{
	int index = 0;
	while(index<10)
	{
		if(dizi[index] < yeni)
		{
			for(int j=8; j>=index; j--)
			{
				dizi[j] = dizi[j-1];
			}
			dizi[index] = yeni;
			break;
		}
		index++;
	}
}
