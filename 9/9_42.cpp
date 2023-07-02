#include<stdio.h>
void buyuktarih(int,int,int,int,int,int);

int main()
{
	buyuktarih(12,12,2004,22,12,2004);
	printf("\n-------------------------\n");
	buyuktarih(20,1,2005,22,12,2004);
return 0;
}

void buyuktarih(int gun1,int ay1,int yil1,int gun2,int ay2,int yil2)
{
	int yil,ay,gun;
	if(yil1>yil2)
	{
		yil = yil1;
		ay = ay1;
		gun = gun1;
	}
	else if(yil2>yil1)
	{
		yil = yil2;
		ay = ay2;
		gun = gun2;
	}
	else
	{
		yil = yil1;
		if(ay1>ay2)
		{
			ay = ay1;
			gun = gun1;
		}
		else if(ay2>=ay1)
		{
			ay = ay2;
			gun = gun2;
		}
		else
		{
			if(gun1>gun2)
				gun = gun1;
			else if(gun2>gun1)
				gun = gun2;
		}
	}
	printf("%d/%d/%d",gun,ay,yil);
}
