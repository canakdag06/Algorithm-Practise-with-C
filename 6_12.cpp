#include<stdio.h>

int main()
{
	float mil;
	printf("Mil olarak uzakligi giriniz -> ");
	scanf("%f",&mil);
	printf("Girilen %.2f mil, %.2f kmdir.",mil,mil*1.609);
}
