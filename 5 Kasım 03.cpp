#include<stdio.h>
#include<stdlib.h>

struct dogum
{
	int yil,ay,gun;
};

struct ogrenci
{
	char ad[20];
	int boy;
	struct dogum dogumBilgileri;  //yukar�daki structi kull.
	int sinif;
}kisi={"Esra",173,{2000,8,3},2}; //ogrenci tipinden bir degisken olu�turuldu ve ilk degerleri verildi

int main()
{
	printf("Ad: %s\n",kisi.ad);
	printf("Dogum: Bilgileri: %d/%d/%d\n", kisi.dogumBilgileri.gun, kisi.dogumBilgileri.ay, kisi.dogumBilgileri.yil);
	return 0;
}
