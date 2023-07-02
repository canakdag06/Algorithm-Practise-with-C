#include<stdio.h>
int recursiveUs(int,int);

int main()
{
	printf("%d",recursiveUs(2,4));
}

int recursiveUs(int taban, int us)
{
	if(us == 0)
		return 1;
	else
		return taban * recursiveUs(taban,us-1);
}
