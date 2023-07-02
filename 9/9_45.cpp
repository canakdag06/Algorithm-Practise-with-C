#include<stdio.h>
int enbuyuk(int);

int main()
{
	printf("\n%d",enbuyuk(54571));
	printf("\n%d", enbuyuk(33));
return 0;
}

int enbuyuk(int sayi)
{
	int max = 0,basamak;
	
	while(sayi!=0)
	{
		basamak = sayi%10;
		sayi = sayi/10;
			if(basamak>max)
				max = basamak;
	}
	return max;
}
