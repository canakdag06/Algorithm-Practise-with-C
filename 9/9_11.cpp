#include<stdio.h>
#include<locale.h>
void asalMi(int);

int main()
{
	int sayi;
	setlocale(LC_ALL, "Turkish");
	printf("Bir say� giriniz: ");
	scanf("%d",&sayi);
	asalMi(sayi);
return 0;
}

void asalMi(int sayi)
{
	int flag = 0;
	for(int i=2;i<=sayi/2;i++)
	{
		if(sayi%i == 0)
		{
			flag = 1;
			break;
		}
	}
	
	if(flag == 0)
		printf("Say� asald�r.\n");
	else
		printf("Say� asal de�ildir.");
}
