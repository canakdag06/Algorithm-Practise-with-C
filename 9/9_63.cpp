#include<stdio.h>
#include<locale.h>
int ahbapBul(int);
int main()
{
	printf("%d\n",ahbapBul(28));
	printf("%d\n",ahbapBul(140));
return 0;
}

int ahbapBul(int sayi)
{
	float toplam_1 = 0;
	for(int i=1;i<=sayi;i++)
	{
		if(sayi%i == 0)
			toplam_1 = toplam_1 + i;
	}
	
	for(int j=sayi-1;j>1;j--)
	{
		float toplam_2 = 0;
		for(int t=1;t<=j;t++)
		{
			if(j%t == 0)
				toplam_2 = toplam_2 + t;
		}
		
		if(toplam_1/sayi == toplam_2/j)
			return j;
	}
}
