#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	int max_bolen = 1;
	int sayi_max = 1;
	
	for(int i=1;i<=1000;i++)
	{
		int bolen=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
				bolen++;		
		}
		if(bolen>max_bolen)
		{
			sayi_max= i;
			max_bolen= bolen;
		}
	}
printf("Böleni en çok olan sayý %d ( Bölen sayýsý %d )",sayi_max,max_bolen);
}
