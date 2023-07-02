#include<stdio.h>
#include<math.h>

int main()
{
	int binler,yuzler,onlar,birler,x,i;
	
	for(i=1000;i<=9999;i++)
	{
	binler= i/1000;
	yuzler= (i%1000)/100;
	onlar= (i%100)/10;
	birler= i%10;
	x= binler+yuzler+onlar+birler;
		if(i==pow(x,3) && i!=4913)
		{
			printf("%d",i);
			return 0;
		}
	}
}
