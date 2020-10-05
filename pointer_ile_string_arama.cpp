#include<stdio.h>
int main()
{
	char *aranan="ara";
	char *aranacak="aranacak kelimeyi ararrar ara";
	char *aranacak_index=aranacak,*aranan_index,*temp_arama;
	int sayac=0,kontrol;
	while(*aranacak_index)
	{
		aranan_index=aranan;
		kontrol=0;
		if(*aranacak_index==*aranan_index)
		{
			aranan_index++;
			temp_arama=aranacak_index+1;
			while(*aranan_index && *temp_arama)
			{
				if(*temp_arama!=*aranan_index)
				{
					kontrol=1;
					break;
				}
				aranan_index++;
				temp_arama++;
			}
			if(kontrol==0&&!*aranan_index)sayac++;
		}
		aranacak_index++;
	}
	printf("sayac: %d",sayac);
	return 0;
}
