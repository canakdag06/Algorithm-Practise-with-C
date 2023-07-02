#include<stdio.h>
#include<locale.h>

int main()
{
	int yuzler,onlar,birler,a,b,c,x,y,z;
	setlocale(LC_ALL,"Turkish");
	for(int i=100;i<=999;i++)
	{
		a=1,b=1,c=1;
		yuzler = i/100;
		onlar = (i%100)/10;
		birler = i%10;
			for(x=yuzler;x>=2;x--)
				a = a*x;
			for(y=onlar;y>=2;y--)
				b = b*y;
			for(z=birler;z>=2;z--)
				c = c*z;
			if(i==a+b+c)
			{
				printf("Aradýðýnýz sayý= %d",i);
			return 0;
			}
	}
}
