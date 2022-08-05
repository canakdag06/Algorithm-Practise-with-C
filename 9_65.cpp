#include<stdio.h>
int harshadSay(int,int);

int main()
{
	printf("%d\n",harshadSay(121,141));
	printf("%d\n",harshadSay(21,41));
return 0;
}

int harshadSay(int ilk,int son)
{
	int temp,toplam,sayac=0;
	for(int i=ilk;i<=son;i++)
	{
		temp = i;
		toplam = 0;
		while(temp!=0)
		{
			toplam = toplam + temp%10;
			temp = temp/10;
		}
		if(i%toplam == 0)
			sayac++;
	}
return sayac;
}
