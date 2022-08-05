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
			printf("Olasýlýðýn %%90dan fazla olmasý için kiþi sayýsý en az %d olmalý.",i);
			break;
		}
		i++;
	}
return 0;
}
