#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int p, q;	// At�n bulundu�u konum (x,y) = (p,q)
	char tahta[8][8];
	int X[8] = { 2, 1, -1, -2, -2, -1, 1, 2 }; // At�n yapabilece�i t�m hamleler (s�ral�)
    int Y[8] = { 1, 2, 2, 1, -1, -2, -2, -1 }; // �rnek hamle: X'te 2, Y'de 1 gidebilir.
	
	printf("At�n konumu (�nce sat�r sonra s�tun) : ");
	scanf("%d %d",&p,&q);
	tahta[p][q] = 'A';
	printf("---------------------------------------\n");
	///////////////////////////////////////
	for(int i=0; i<8; i++)
	{
        // At�n hamleden sonraki pozisyonu
        int x = p + X[i];
        int y = q + Y[i];
 
        // S�n�r kontrol�
        if (x>=0 && y>=0 && x<8 && y<8)
        	tahta[x][y] = '*';
    }
    ///////////////////////////////////////
    printf("  0 1 2 3 4 5 6 7\n");
	for(int i=0; i<8; i++)
	{
		printf("%d ",i);
		for(int j=0; j<8; j++)
		{
			if(tahta[i][j] == '*' || tahta[i][j] == 'A')
				printf("%c ",tahta[i][j]);
			else
				printf("- ");
		}
		printf("\n");
	}
	return 0;
}
