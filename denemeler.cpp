#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct dugum{
	int data;
	struct dugum* next;
}dugum1;
dugum1* bas=NULL;
dugum1* gecici;
dugum1* onceki;
dugum1* sonraki;
int ekle(int veri)
{
	if(bas==NULL)
	{
		//basa ekle
	//	bas=(struct dugum1*)malloc(struct dugum1);
		//printf("jkgfnm");
		bas->data=veri;
		//printf("jhefrhhrhhr");
		bas->next=NULL;
	}
	gecici=bas;
	while(gecici->next)
	{
		gecici=gecici->next;
	}
	//gecici->next=(struct dugum1*)malloc(struct dugum1);
	gecici->next->data=veri;
	gecici->next->next=NULL;
	return 0;
}

int silme(int veri)
{
	if(bas->data==veri)
	{
		printf("hfejk");
		gecici=bas;
		bas=gecici->next;
		free(gecici);
	}
	gecici=bas;
	while(gecici->next)
	{
		if(gecici->next->data==veri)
		{
			onceki=gecici;
			sonraki=gecici->next->next;
			onceki->next=sonraki;
			free(gecici);
			break;
		}
		gecici=gecici->next;
	}
	return 0;
}

int siraliekle(int veri)
{
	gecici=bas;
	while(gecici->next)
	{
		if(veri>gecici->data)
		{
			sonraki=gecici->next;
			//gecici->next=(struct dugum1*)malloc(sizeof(dugum1));
			gecici->next->data=veri;
			gecici->next->next=sonraki;
		}
		gecici=gecici->next;
	}
}

void listele()
{
	gecici=bas;
	while(gecici->next)
	{
		printf("%d->",gecici->data);
		gecici=gecici->next;
	}
}

int main()
{
	int secim,veri;
	while(1==1)
	{
		printf("\n1-Ekle\n");
		printf("2-Sil\n");
		printf("3-Sirali Ekle\n");
		printf("4-Listele\n");
		printf("Secim: ");
		scanf("%d",&secim);
		switch(secim)
		{
			case 1:
			{
				printf("\nEklenecek sayi: ");
				scanf("%d",&veri);
				ekle(veri);
				listele();
				break;
			}
			case 2:
			{
				printf("\nEklenecek sayi: ");
				scanf("%d",&veri);
				silme(veri);
				listele();
				break;
			}
			case 3:
			{
				printf("\nEklenecek sayi: ");
				scanf("%d",&secim);
				siraliekle(veri);
				listele();
				break;
			}
			case 4:
			{
				listele();
				break;
			}
		}
	}
	return 0;
}
