#include<stdio.h>
int ucgen(int,int,int);

int main()
{
	printf("\n%d\n",ucgen(3,4,5));
	printf("%d",ucgen(1,1,10));
return 0;
}

int ucgen(int a,int b,int c)
{
	if((a+b)>c && (b+c)>a && (a+c)>b)
		return 1;
	else
		return 0;
}
