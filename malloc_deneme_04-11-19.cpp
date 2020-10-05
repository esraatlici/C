#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
	int boyut;
	char *dizi;	
	printf("Kelimenin boyutunu gir: ");
	scanf("%d",&boyut);
	dizi=(char *)malloc(boyut);
	char kelime[boyut];
	printf("Kelimeyi giriniz: ");
	scanf("%s",&kelime);
	//gets(kelime);
	printf("%d",strlen(kelime));
	printf("\n\n");
	if(strlen(kelime)!=boyut) printf("Hata");
	/*for(int i=0;i<boyut;i++)
	{
		*(dizi+i)=kelime[i];
	}*/
	dizi=kelime;
	for(int i=0;i<boyut;i++)
	{
		printf("%d.adres: %d   %d.karakteri: %c\n ",i+1,(dizi+i),i+1,*(dizi+i));
	}
	int ekle;
	char eklenecek;
	printf("Kac karakter eklenecek :");
	scanf("%d",&ekle);
	printf("%d",dizi+boyut-1);
	dizi=(char *)realloc(dizi,ekle);
	printf("%d",dizi+boyut+ekle-1);
	if((dizi=(char *)realloc(dizi,ekle))==NULL) printf("realloc hatasi");
	for(int j=boyut;j<=(boyut+ekle);j++)
	{
		printf("%d.karakteri giriniz: ",j);
		scanf("%c",&eklenecek);
		*(dizi+j)=eklenecek;
	}
		for(int k=0;k<boyut+ekle;k++)
	{
		printf("%d.adres: %d   %d.karakteri: %c\n ",k+1,(dizi+k),k+1,*(dizi+k));
	}
	free(dizi);
	return 0;
}
