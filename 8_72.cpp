#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int i=2;
	float carpim = 1.0;
	
	while(1)
	{
		carpim = carpim*((366.0-i+1.0)/366.0);
		if((float)(1.0-carpim) > 0.9)
		{
			printf("Olas�l���n %%90dan fazla olmas� i�in ki�i say�s� en az %d olmal�.",i);
			break;
		}
		i++;
	}
return 0;
}
