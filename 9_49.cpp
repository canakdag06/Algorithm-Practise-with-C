#include<stdio.h>
#include<locale.h>
#include<math.h>

int enBuyukMulayim(int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	printf("%d\n", enBuyukMulayim( 3 ));
	printf("%d\n", enBuyukMulayim( 4 ));
return 0;
}

int enBuyukMulayim(int basamak)
{
	int max=0;
	for(int i=pow(10,basamak-1) ; i<pow(10,basamak) ; i++)
	{
		int temp = i;
		int carpim=1,toplam=0;
		while(temp!=0)
		{
			carpim = carpim*(temp%10);
			toplam = toplam+temp%10;
			temp = temp/10;
		}
		if(i == carpim*toplam)
			max = i;
	}
return max;
}
