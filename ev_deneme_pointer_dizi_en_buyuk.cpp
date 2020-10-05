#include<stdio.h>

int * adres_bul(int *baslangic,int satir,int sutun)
{
	int *adres=baslangic,i;
	for(i=0;i<satir*sutun;i++)
	{
		if(*adres<*(baslangic+i))
		{
			adres=baslangic+i;
		}
	}
	return adres;
}

int main()
{
	int dizi[3][2]={{2,45},{47,5},{23,46}};
	printf("%d\n",&dizi[2][1]);
    int *a=adres_bul(*dizi,3,2);
	printf("%d\n",a);
	return 0;
}
