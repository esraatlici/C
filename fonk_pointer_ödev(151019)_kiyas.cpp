#include<stdio.h>
int hesapla(int x,int y)
{
  	printf("x'in adresi: %d\n",&x);
	printf("y'in adresi: %d\n",&y);
	return ((x*x)+y);
}
int main()
{
	int x,y;
for(int i=0;i<3;i++)
{
	printf("Iki sayi gir: ");
    scanf("%d%d",&x,&y);
    int (*hesaplaptr)(int,int);
	hesaplaptr=&hesapla;
	int c=hesaplaptr(x,y);
	//printf("x'in adresi: %d\n",&x);
	//printf("y'in adresi: %d\n",&y);
	printf("c'in adresi: %d\n",&c);
	printf("Sonuc: %d\n",c);
}
/*	int d=hesaplaptr(x,y);
	printf("x'in adresi: %d\n",&x);
	printf("y'in adresi: %d\n",&y);
	printf("d'in adresi: %d\n",&d);
	printf("Sonuc: %d\n",d);
	int e=hesaplaptr(x,y);
		printf("x'in adresi: %d\n",&x);
	printf("y'in adresi: %d\n",&y);
	printf("e'in adresi: %d\n",&e);
	printf("Sonuc: %d\n",e);*/
}
