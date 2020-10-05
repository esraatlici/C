#include <stdio.h>
#include <stdlib.h>
//Kuyruga sirali ekleme ve ötelenme sayisina göre silme
//Mehmet Dorukcan CAKIR

typedef struct Liste
{
    int deger;
    int iter;
    struct Liste *sonraki;
}Kuyruk;

Kuyruk *SiraliEkle(Kuyruk *ilk,int fiyat)
{

    if(ilk==NULL)
    {
        ilk=(Kuyruk*)malloc(sizeof(Kuyruk));
        ilk->deger=fiyat;
        ilk->iter=0;
        ilk->sonraki=NULL;
        return ilk;
    }
    if(ilk->deger<fiyat)
    {
        Kuyruk *gecici=ilk;
        while(gecici!=NULL)
        {
            gecici->iter+=1;
            gecici=gecici->sonraki;
        }
        Kuyruk *temp=(Kuyruk*)malloc(sizeof(Kuyruk));
        temp->deger=fiyat;
        temp->sonraki=ilk;
        temp->iter=0;
        return temp;
    }

    Kuyruk *gecici=ilk;
    while(gecici->sonraki!=NULL&&gecici->sonraki->deger>fiyat)
        gecici=gecici->sonraki;
    Kuyruk *temp=(Kuyruk*)malloc(sizeof(Kuyruk));
    temp->deger=fiyat;
    temp->iter=0;
    temp->sonraki=gecici->sonraki;
    gecici->sonraki=temp;

    Kuyruk *gecici2=temp->sonraki;
    while(gecici2!=NULL)
        {
            gecici2->iter+=1;
            gecici2=gecici2->sonraki;
        }
    return ilk;
}

Kuyruk *Silme(Kuyruk *ilk)
{
    int enBuyuk=2;
    if(ilk==NULL)
        return NULL;
    Kuyruk *gecici=ilk->sonraki;
    while(gecici!=NULL)
    {
        if(gecici->iter>enBuyuk)
            enBuyuk=gecici->iter;
        gecici=gecici->sonraki;
    }
    if(enBuyuk<=2)
    {
        Kuyruk *temp=ilk;
        ilk=ilk->sonraki;
        free(temp);
        return ilk;
    }
    else
    {
        Kuyruk *gecici2=ilk->sonraki;
        while(gecici2->sonraki->iter!=enBuyuk)
            gecici2=gecici2->sonraki;
        Kuyruk *temp=gecici2->sonraki;
        gecici2->sonraki=gecici2->sonraki->sonraki;
        free(temp);
        return ilk;
    }
}

void Listele(Kuyruk *ilk)
{
    if(ilk==NULL)
        printf("Kuyruk bos!!!");
    else
    {
        while(ilk->sonraki!=NULL)
        {
            printf("%d->%d ",ilk->deger,ilk->iter);
            ilk=ilk->sonraki;
        }
        printf("%d->%d",ilk->deger,ilk->iter);
    }
}

void Yazdir(Kuyruk *ilk)
{
    if(ilk==NULL)
        printf("Kuyruk bos!!!");
    else
    {
        while(ilk->sonraki!=NULL)
        {
            printf("%d->%d ",ilk->deger,ilk->iter);
            ilk=ilk->sonraki;
        }
        printf("%d->%d",ilk->deger,ilk->iter);
    }
}

int main()
{
   Kuyruk *ilk=NULL;
   char secim;
   int fiyat;
   while(1==1)
   {
       puts("Ekle(e)\nCikar(c)\nListele(l)\nBitir(b)\n");
       secim=getchar();
       if(secim=='b')
       {
           Yazdir(ilk);
           break;
       }
       if(secim=='e')
       {
           printf("Eklenecek fiyati giriniz:");
           scanf("%d",&fiyat);
           ilk=SiraliEkle(ilk,fiyat);
           system("cls");
       }
       if(secim=='c')
       {
           ilk=Silme(ilk);
           Listele(ilk);
           printf("\n\n");
       }
       if(secim=='l')
       {
           Listele(ilk);
           printf("\n\n");
       }
       secim=getchar();
   }
   return 0;
}
