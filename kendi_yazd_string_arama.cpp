#include<stdio.h>

int main()
{
	char *kelime="ara";
	char *cumle="aranaraararrarmar tara karara";
	char *ara,*aranacak,*t,*z;
	ara=kelime;
	int sayac=0,kontrol=0;
	aranacak=cumle;
	while(*aranacak)
	{
		if(*ara==*aranacak)
		{
		    t=ara+1;
		    z=aranacak+1;
		    while(*t)
		    {
			    if(*t==*z) kontrol=1;
			    else kontrol=0;
			    *t++;
			    *z++;
		    }
		    if(kontrol==1)sayac=sayac+1;
		}
		*aranacak++;
	}
	printf("%d",sayac);
}
