#include <stdio.h>
#include <stdlib.h>


struct kayit
{
 char ad[10];
 char *soyadi;
 long no;
 int sinif;
};

int main()
{
    struct kayit ogrenci;

    printf("Ogrenci numarasi :");
    scanf("%ld",&ogrenci.no);

    printf("Ogrenci Adi :");
    scanf("%s",ogrenci.ad);
    ogrenci.soyadi = (char*)malloc(10);//Bir bir string oldugu icin bazen compiler ile calismiyor bu yuzden 
    //kullanmadan once kaldigi yeri ayarmaliyiz.hoca oyle bana  dedi iyi hatilarsam 
    printf("Ogrenci soyadi :");
    scanf("%s",ogrenci.soyadi);

    printf("Ogrenci sinif :");
    scanf("%d",&ogrenci.sinif);

     printf("Ogrenci Bilgileri :\n");
     printf("Ogrenci No :%ld\n",ogrenci.no);
     printf("Ogrenci Ad :%s\n",ogrenci.ad);
     printf("Ogrenci Soyadi :%s\n",ogrenci.soyadi);
     printf("Ogrenci Sinifi :%d\n",ogrenci.sinif);
    return 0;
}
