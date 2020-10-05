#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct Liste{
	int numara;
	struct Liste* sonraki;
}BListe;

BListe *ilk=NULL,*gecici;

BListe *Bilgi_Al(int num)
{
	BListe *Bilgi=(BListe*)malloc(sizeof(BListe));
	Bilgi->numara=num;
	return Bilgi;
}

void Ekle(BListe *bilgi)
{
	if(ilk==NULL)
	{
		ilk=bilgi;
		ilk->sonraki=NULL;
	}
	else
	{
		gecici=ilk;
		while(gecici->sonraki)
		{
			gecici=gecici->sonraki;
		}
		gecici->sonraki=bilgi;
		bilgi->sonraki=NULL;
	}
}

int Listele()
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
		if(gecici->numara=num)return gecici;
		gecici=gecici->sonraki;
	}
	return NULL;
}

void silme(int silnum)
{
	BListe* bironceki;
	gecici=ilk;
	bironceki=NULL;
	while(gecici)
	{
		if(gecici->numara==silnum) break;
		bironceki=gecici;
		gecici=gecici->sonraki;
	}
	if(gecici)
	{
		if(bironceki==NULL)
		{
			if(ilk->sonraki==NULL)ilk=NULL;
		    else ilk=ilk->sonraki;
		}
     	else
	    {
		    bironceki->sonraki=gecici->sonraki;
	    }
	free(gecici);
	printf("Kayit Silindi");
    }
    else printf("Kayit Silinmedi");
}

void siraliekle(BListe *Bilgi)
{
	if(ilk==NULL)
	{
		ilk=Bilgi;
		ilk->sonraki=NULL;
	}
	
	if(ilk->numara>Bilgi->numara)
	{
		Bilgi->sonraki=ilk;
		ilk=Bilgi;

	}
	
	gecici=ilk;
	while(gecici->sonraki!=NULL && gecici->sonraki->numara<Bilgi->numara)
	{
		gecici=gecici->sonraki;
	}
	Bilgi->sonraki=gecici->sonraki; 
	gecici->sonraki=Bilgi;
	
}
void tersine()
{
	BListe *onceki=NULL;
	BListe *sonraki;
	gecici=ilk;
	while(gecici)
	{
		sonraki=gecici->sonraki;
		gecici->sonraki=onceki;
		onceki=gecici;
		gecici=sonraki;
	}
	ilk=onceki;
}

int main()
{
	BListe *bilgi;
	char secim;
	int numara;
	while(1==1)
	{
		printf("\nEkle (e)\n");
		printf("Listele (l)\n");
		printf("Ara (a)\n");
		printf("Sil (s)\n");
		printf("Sirali ekle (d)\n");
		printf("Ters Cevir (t)\n");
		printf("\nIstediginiz islemi girin:\n");
		scanf("\n%c",&secim);
		switch(secim)
		{
			case 'e':
			{   
				scanf("%d",&numara);
				bilgi=Bilgi_Al(numara);
				Ekle(bilgi);
			}
				break;
			case 'l':
				Listele(); 
				break;
			case 't':
				tersine();  
				break;
			
			case 'a':
			{
				scanf("%d",&numara);
				Ara(numara);
			}
				break;
			
			case 's':
			{
				scanf("%d",&numara);
				silme(numara);
			}
			break;
			
			case 'd':
			{ 
				scanf("%d",&numara);
				BListe *a=Bilgi_Al(numara);
				siraliekle(a);
			}
			break;

		}
	}
	return 0;
}

