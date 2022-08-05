#include<stdio.h>
#include<math.h>

int binaryToDecimal(int[],int);

int main()
{
	int dizi[6] = {1,0,0,1,0,1};
	printf("%d",binaryToDecimal(dizi,6));
	
	return 0;
}

int binaryToDecimal(int dizi[],int boyut)
{
	int decimal = 0;
	for(int i=0; i<boyut; i++)
		decimal += dizi[boyut-i-1] * pow(2,i);
	return decimal;
}
