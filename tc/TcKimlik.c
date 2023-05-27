/*
   1) Eleman sayisi 11 olmalı +
   2) ilk hane 0 (sıfır) olamaz +
   3) 1. 3. 5. 7. 9. basamakların toplamının 7 katından
     2. 4. 6. 8. basamakların toplamını çıkardıgımızda 
     sonucun mod10 u 10. basamaktaki sayi ile aynı olmalı
   4) ilk 10 basamagın toplamının mod10 u 11. rakamı vermeli
   5) her hane rakam olmalı

*/


#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	int i = 1;
	char tcKimlik[11];
	long long int toplamTek = 0, toplamCift =0;
	long long toplam = 0;
	
	printf("Tc kimlik giriniz: ");
	scanf("%s", tcKimlik);
	
	if(strlen(tcKimlik) == 11)
	{
		printf("Tc 11 Haneli\n");
		if(tcKimlik[0] != '0')
		{
			printf("ilk karakter sifir degil\n");
				for(i = 0; i < 10 ; i+=2)
				{
					toplamTek += tcKimlik[i] - '0';
									
				}
				printf("tekler = %ld\n",toplamTek);
				for(i = 1; i < 9 ; i+=2)
				{
					toplamCift += tcKimlik[i] - '0';
					
				}
				printf("ciftler = %ld\n",toplamCift);
				
				for(int j = 0; j < 10; j++)
				{
					toplam += tcKimlik[j] - '0';
					
				}
				printf("tumu = %ld\n",toplam);
				
				
					if((((toplamTek * 7) - toplamCift)%10) == (tcKimlik[9] - '0'))
					{
						printf("10. hane uygun\n");
							
							if((toplam%10) == (tcKimlik[10] - '0'))
							{
								printf("11. hane uygun\n");
							}
							else
							{
								printf("11. hane uygun degil\n");
								
							}
					}
					else
					{
						printf("10. hane uygun degil\n");
					}
					
				
		}
		else
		{
			printf("İlk hane sifir olamaz.\n");
		}
		
	}
	
	else
	{
		printf("TC 11 haneli değil\n");
	}
	
	
	
	
	return 0;
}

