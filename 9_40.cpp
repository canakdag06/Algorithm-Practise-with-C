#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<locale.h>
void noktaBul(int,int,int,int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	noktaBul(-2,3, 2,-2);
return 0;
}

void noktaBul(int x1,int y1, int x2, int y2)
{
	int x3,y3;
		if(x1<x2)
		{
			x3 = x1+rand()%(x2-x1+1);
		}
		else if(x2<x1)
		{
			x3 = x2+rand()%(x1-x2+1);
		}
	
		if(y1<y2)
		{
			y3 = y1+rand()%(y2-y1+1);
		}
		else if(y2<y1)
		{
			y3 = y2+rand()%(y1-y2+1);
		}
	
	printf("(-2,3) ve (2,-2) noktalarý arasýndan rastgele nokta = (%d,%d)",x3,y3);
}
