#include<stdio.h>
#include<locale.h>

int icindeVarMi(char[], int, char[], int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	char dizi1[6]={'a','n','k','a','r','a'};
	char dizi2[3]={'k','a','r'};
	int c;
	
	c = icindeVarMi(dizi1, 6, dizi2, 3);
	printf("Sonuç = %d", c);
	return 0;
}

int icindeVarMi(char dizi1[], int boyut1, char dizi2[], int boyut2)
{
	int flag;
	for(int i=0; i<boyut1; i++)
	{
		if(dizi1[i] == dizi2[0])
		{
			flag = 1;
			for(int j=i+1, k=1; k<boyut2; j++,k++)
			{
				if(dizi1[j] != dizi2[k])
				{
					flag = 0;
					break;
				}
				
				if(k == boyut2-1 && flag == 1)
					return flag;
			}
		}
	}
	return flag;
}
