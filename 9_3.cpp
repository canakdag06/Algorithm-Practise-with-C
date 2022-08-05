#include<stdio.h>
#include<locale.h>

void ucgenCiz();
void dikdortgenCiz();
void boslukBirak();


int main()
{
	ucgenCiz();
	dikdortgenCiz();
	boslukBirak();
	ucgenCiz();
	dikdortgenCiz();
	
return 0;
}

void ucgenCiz()
{
	printf("   /\\\n");
	printf("  /  \\\n");
	printf(" /    \\\n");
	printf("/______\\\n");
}

void dikdortgenCiz()
{
	printf("--------\n");
	printf("|      |\n");
	printf("|      |\n");
	printf("--------\n");
}

void boslukBirak()
{
	printf("\n\n");
}
