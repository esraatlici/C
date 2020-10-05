#include <stdio.h>
#include <stdlib.h>

struct kayit
{
    char ad[10];
    char *soyad;
    long no;
    int sinif;
};

int main()
{
    struct kayit ogrenci;

    printf("Ogrenci numarasi: ");
    scanf("%ld", &ogrenci.no);

    printf("Ogrenci adi: ");
    scanf("%s", ogrenci.ad);

    printf("Ogrenci soyadi: ");
    scanf("%s", ogrenci.soyad);

    printf("Ogrenci sinif: ");
    scanf("%d", &ogrenci.sinif);

    printf("Ogrenci Bilgileri\n");
    printf("Ogrenci No: %ld\n", ogrenci.no);
    printf("Ogrenci Adi: %s\n", ogrenci.ad);
    printf("Ogrenci Soyadi: %s\n", ogrenci.soyad);
    printf("Ogrenci Sinifi: %d\n", ogrenci.sinif);

    return 0;
}
