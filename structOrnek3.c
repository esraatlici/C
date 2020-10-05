#include <stdio.h>
#include <stdlib.h>

struct dogum
{
    int yil,ay,gun;
};

struct ogrenci
{
    char ad[20];
    int boy;
    struct dogum dogumBilgileri;
    int sinif;
}kisi = {"Mehmet", 178, {1980,11,24}, 2};

int main()
{
    printf("Ad: %s\n", kisi.ad);
    printf("Dogum Bilgileri: %d/%d/%d\n",
           kisi.dogumBilgileri.gun,
           kisi.dogumBilgileri.ay,
           kisi.dogumBilgileri.yil);

    return 0;
}
