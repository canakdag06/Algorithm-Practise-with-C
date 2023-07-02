#include<stdio.h>
#include<locale.h>
float ihtimal(int);

int main()
{
	printf("%.2f\n", ihtimal(20));
	printf("%.2f\n", ihtimal(37));
return 0;
}

float ihtimal(int kisi)
{
	float carpim=1;
	
	for(int i=2;i<=kisi;i++)
	{
		carpim = carpim*((366.0-i+1.0)/366.0);
	}
return 1.0-carpim;
}
