#include <stdio.h>
#include <stdlib.h>

struct kayit
{
	char ad[10];
	char *soyad; //onceden *soyad idi,oyleyken hata verdi
	long no;
	int sinif;
};

int main()
{
	struct kayit ogrenci; //ogrencinin veri tipi struct kayit
	
	printf("Ogrenci numarasi: ");
	scanf("%ld",&ogrenci.no);
	
	printf("Ogrenci adi: ");
	scanf("%s",ogrenci.ad);
	
	printf("Ogrenci soyadi: ");
	scanf("%s",&ogrenci.soyad);
	
	printf("Ogrenci sinifi: ");
	scanf("%d", &ogrenci.sinif);
	
	
	printf("\n--------------------\n");
	printf("Ogrenci Bilgileri\n\n");
	printf("Ogrenci No:%ld\n",ogrenci.no);
	printf("Ogrenci Adi:%s\n",ogrenci.ad);
	printf("Ogrenci Soyadi:%c\n",&ogrenci.soyad);
	printf("Ogrenci Sinifi:%d\n",ogrenci.sinif);
	
	return 0;
}
