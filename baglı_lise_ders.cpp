#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct  Liste
{
	int numara;
	struct Liste *sonraki;

}BListe;
BListe *ilk=NULL,*gecici;

BListe *Bilgi_Al(int num)
{
	BListe *Bilgi=(BListe *)malloc(sizeof(BListe));
	Bilgi->numara=num;
	return Bilgi;
}

void ekle (BListe *bilgi)
{
	if (ilk==NULL)
	{
		ilk=bilgi;
		ilk->sonraki=NULL;
	}
	else
	{
		gecici=ilk;
		while(gecici->sonraki!=NULL)
		   gecici=gecici->sonraki;
		gecici->sonraki=bilgi;
		bilgi->sonraki=NULL;
	}
}

int listele()
{
	gecici=ilk;
	if(gecici==NULL)return 0;
	while(gecici)
	{
		printf("%d->",gecici->numara);
		gecici=gecici->sonraki;
	}
	return 1;
}

BListe *Ara(int num)
{
	gecici=ilk;
	while(gecici)
	{
		if(gecici->numara==num)
		return gecici;
		gecici=gecici->sonraki;

	}
	return NULL;
}

void silme(int silnum)
{
	BListe *bironceki;
	gecici=ilk;
	bironceki=NULL;
	while(gecici)//silinecek kayit konumunu bul
	{
		if(gecici->numara==silnum)
		break;
		bironceki=gecici;
		gecici=gecici->sonraki;

	}
	if(gecici!=NULL)//silinecek kayit yoksa gecici NULL u gösteriyordur
	{
		if(bironceki==NULL)//silinecek ilk kayitsa
		{
				if (ilk->sonraki==NULL)//ilk ve tek kayit var ise
				{
					ilk=NULL;
				}
				else //ilk kayit ise ancak birden fazlakayit varsa
				{
					ilk=ilk->sonraki;
				}

		}
		else // silinecek kayit ilk kayit deðil ise
		{
			bironceki->sonraki=gecici->sonraki;
		}
		free(gecici);
		printf("kayit silindi.");


	}
	else
	printf("kayit silinemedi ");

}
int siraliekle(BListe *Bilgi)
{
	if (ilk==NULL)
	{
		ilk=Bilgi;
	    ilk->sonraki=NULL;
	    return 0;

	}
	if(ilk->numara>Bilgi->numara)
	{
		Bilgi->sonraki=ilk;
		ilk=Bilgi;
		return 0;
	}
    gecici=ilk;
    while (gecici->sonraki!=NULL && gecici->sonraki->numara<Bilgi->numara)
    gecici=gecici->sonraki;
    Bilgi->sonraki=gecici->sonraki;
    gecici->sonraki=Bilgi;
}
void main ()
{
	BListe *bilgi,*bul;
	char secim;
	int numara;
	while(1==1)
	{




	}

}
