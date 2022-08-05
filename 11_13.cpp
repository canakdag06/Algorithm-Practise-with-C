#include<stdio.h>
#include<locale.h>

int ilkBenzersiz(int[], int boyut);
int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int dizi[7] = {3, 12, 1, 12, 7, 3, 12}, c;
	
	c = ilkBenzersiz(dizi, 7);
	printf("Dizinin ilk benzersizi = %d", c);
}

int ilkBenzersiz(int dizi[], int boyut)
{
	int flag = 0;
	for(int i=0; i<boyut; i++)
	{
		
		for(int j= i+1; j<boyut ; j++)
		{
			if(dizi[i] == dizi[j])
				flag = 1;
		}
		
		if(flag == 0)
			return dizi[i];
		else
			flag = 0;
	}
	return -1;
}
