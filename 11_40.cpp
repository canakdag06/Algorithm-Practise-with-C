#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int a[10], tekrar[10];
	
	bool check[10];
	for(int i=0; i<10; i++)
		check[i] = false;
	
	printf("a dizisinin elemanlarını giriniz: ");
	for(int i=0; i<10; i++)
		scanf("%d",&a[i]);
	
	printf("Elemanların tekrar edilme sayısı\n");
	for(int i=0; i<10; i++)
	{
		if(check[i] == true)
			continue;
			
		tekrar[i] = 0;
		for(int j=0; j<10; j++)
		{
			if(a[i] == a[j])
			{
				check[j] = true;
				tekrar[i]++;
			}
		}
		printf("%d sayısından %d tane\n",a[i],tekrar[i]);
	}
	return 0;
}
