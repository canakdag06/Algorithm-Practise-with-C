#include<stdio.h>
#include<math.h>
#include<locale.h>
int alanbul(int,int,int,int);

int main()
{
	int c,x1,x2,y1,y2;
	c = alanbul( -2,3, 2,-2 );
	printf("%d\n",c);
return 0;
}

int alanbul(int x1,int y1, int x2, int y2)
{
	int kenar_a, kenar_b;
	if(x1*x2<0)
		kenar_a = abs(x1)+abs(x2);
	else
		kenar_a = abs(x1-x2);
	
	if(y1*y2<0)
		kenar_b = abs(y1)+abs(y2);
	else
		kenar_b = abs(y1-y2);

	return kenar_a*kenar_b;
}
