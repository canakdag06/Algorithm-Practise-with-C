#include<stdio.h>

int main()
{
	float inc;
	printf("Uzunluk (inc) -> ");
	scanf("%f",&inc);
	printf("%.2f inc = %.2f cm = %.2f mm",inc,inc*2.54,inc*25.4);
}
