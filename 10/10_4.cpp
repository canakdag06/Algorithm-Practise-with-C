#include<stdio.h>
#include<math.h>
int maas(int);

int main()
{
	printf("%d",maas(4));
}

int maas(int gun)
{
	int para = 3;
	if(gun == 1)
	{
		return para;
	}
	return para*pow(2,gun-1) + maas(gun-1);
}
