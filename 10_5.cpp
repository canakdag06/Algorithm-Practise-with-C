#include<stdio.h>
int obebRecursive(int,int);

int main()
{
	printf("%d",obebRecursive(192,72));
}

int obebRecursive(int x, int y)
{
	if(x%y == 0)
		return y;
	else
		return obebRecursive(y, x%y);
}
