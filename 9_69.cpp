#include<stdio.h>
#include<math.h>

int isNarsistNumber(int);

int main()
{
	printf("%d\n",isNarsistNumber(1634));
	printf("%d\n", isNarsistNumber(89));
return 0;
}

int isNarsistNumber(int sayi)
{
	int n = 0;
	int temp = sayi;
	int toplam;
	while(temp!=0)
	{
		temp = temp/10;
		n++;
	}
	
	temp = sayi;
	
	while(temp!=0)
	{
		toplam = toplam + pow(temp%10,n);
		temp = temp/10;
	}
	
	if(toplam == sayi)
		return 1;
	else
		return 0;
}
