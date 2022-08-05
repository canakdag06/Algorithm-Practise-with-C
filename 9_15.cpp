#include<stdio.h>
int isaretBul(int);

int main()
{
	printf("%d ",isaretBul(5));
	printf("%d ",isaretBul(0));
	printf("%d",isaretBul(-7));
return 0;
}

int isaretBul(int sayi)
{   
    if (sayi < 0)
        return -1;
    else if(sayi > 0)
    	return 1;
    else
    	return 0;
}
