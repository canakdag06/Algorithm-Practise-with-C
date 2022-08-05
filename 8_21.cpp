#include<stdio.h>
#include<locale.h>

int main()			// GAZÝ ÜNÝVERSÝTESÝNDEN ARKADAÞIM UÐUR BEBE'NÝN KATKILARIYLA
{
	setlocale(LC_ALL, "Turkish");
	int last_number= -1; // bu deðiþken bulduðumuz son asal sayýyý kaydetmemiz için(neden -1 verdiðimizi kodun sonunda anlayacaðýz)
	
	for(int i=99;i>=10;i--) //en büyük 2 asal sayýyý istediðimiz için 99dan geriye saydýralým
	{
		bool a = true; // önceki asal sayý uygulamamýzdaki flag degiþkeni gibi bu deðiþkeni de kontrol için kullanýyoruz
		
			for(int j=2;j<i;j++) // i sayýsýnýn 2den baþlayýp kendisine kadar olan sayýlara bölünüp bölünmediðini kontrol ediyoruz.
			{
				if(i%j == 0)
				{
					a = false; break;
				}
			}
			
			if(a)
			{
				if((last_number-2)== i && last_number != -1) /* burda odaklanmamýz gereken ilk nokta ilk asal sayýyý bulurken önemli olanýn
	if deðil, else olduðu. ilk asal sayýmýz 73 olacak. kod burayý ilk kez çalýþtýrdýðýnda last_number deðiþkenimiz -1 olduðu için 73 sayýsý
	last_number deðiþkenine kaydedilecek. sonrasýnda 71 sayýsýna gelindiðinde ve asal olduðu görüldüðünde last_number-2 nin 71e eþit olduðu
	tespit edilip aranan deðerler ekrana yazýlacak.*/
				{
					printf("Aranan Deðerler : %d ve %d", last_number, i); break;
				}
				else last_number = i;
			}
	}
}
