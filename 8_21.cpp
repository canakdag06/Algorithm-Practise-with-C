#include<stdio.h>
#include<locale.h>

int main()			// GAZ� �N�VERS�TES�NDEN ARKADA�IM U�UR BEBE'N�N KATKILARIYLA
{
	setlocale(LC_ALL, "Turkish");
	int last_number= -1; // bu de�i�ken buldu�umuz son asal say�y� kaydetmemiz i�in(neden -1 verdi�imizi kodun sonunda anlayaca��z)
	
	for(int i=99;i>=10;i--) //en b�y�k 2 asal say�y� istedi�imiz i�in 99dan geriye sayd�ral�m
	{
		bool a = true; // �nceki asal say� uygulamam�zdaki flag degi�keni gibi bu de�i�keni de kontrol i�in kullan�yoruz
		
			for(int j=2;j<i;j++) // i say�s�n�n 2den ba�lay�p kendisine kadar olan say�lara b�l�n�p b�l�nmedi�ini kontrol ediyoruz.
			{
				if(i%j == 0)
				{
					a = false; break;
				}
			}
			
			if(a)
			{
				if((last_number-2)== i && last_number != -1) /* burda odaklanmam�z gereken ilk nokta ilk asal say�y� bulurken �nemli olan�n
	if de�il, else oldu�u. ilk asal say�m�z 73 olacak. kod buray� ilk kez �al��t�rd���nda last_number de�i�kenimiz -1 oldu�u i�in 73 say�s�
	last_number de�i�kenine kaydedilecek. sonras�nda 71 say�s�na gelindi�inde ve asal oldu�u g�r�ld���nde last_number-2 nin 71e e�it oldu�u
	tespit edilip aranan de�erler ekrana yaz�lacak.*/
				{
					printf("Aranan De�erler : %d ve %d", last_number, i); break;
				}
				else last_number = i;
			}
	}
}
