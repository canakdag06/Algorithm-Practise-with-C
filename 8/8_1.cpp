#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	int x;
	printf("ONLUK		SEKÝZLÝK	ONALTILIK");
	for(x=0;x<=15;x++)
		printf("\n%d		%o		%x",x,x,x);
	return 0;
}
