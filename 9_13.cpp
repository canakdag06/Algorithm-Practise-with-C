#include<stdio.h>

float gronsCevir(float,char);

int main()
{
	printf("%.7f\n",gronsCevir(3,'o'));
	printf("%.7f\n",gronsCevir(28.3495231,'g'));
return 0;
}

float gronsCevir(float deger, char cins)
{
	if(cins == 'o')
		return deger = deger*28.3495231;
	else if(cins == 'g')
		return deger = deger/28.3495231;
}
