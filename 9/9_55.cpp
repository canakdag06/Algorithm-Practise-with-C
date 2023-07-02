#include<stdio.h>
#include<stdlib.h>
float kucukAci(int,int);

int main()
{
	float c;
	c = kucukAci( 17,45 );
	printf("\n%.1f",c);
return 0;
}

float kucukAci(int saat,int dakika)
{
	saat = saat%12;
	
	if(dakika == saat*5)
	{
		printf("0 derece aci vardir");
	}
	else
	{
		int aci;
		aci = (dakika-(saat*5))*6;
		
		if(aci<0)
		{
			aci = aci*(-1);
    	}
	
		if(aci>180)
		{
			aci = 180-(aci%180);
		}
		float c;
		c = aci + (1/12.0*dakika*6);
		return c;
	}
}
