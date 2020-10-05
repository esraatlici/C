#include<stdio.h>
int toplam(int *,int*);
int main()
{
	int x,y,*p1,*p2,sonuc;
	p1=&x;p2=&y;
	for(int i=0;i<3;i++)
	{
		printf("Sayi gir: ");
	scanf("%d%d",&x,&y);
	sonuc=toplam(p1,p2);
	printf("Toplam: %d\n",sonuc);
	printf("x'in adresi: %p\n",&x);
	printf("y'in adresi: %p\n",&y);
	}

}
int toplam(int *x,int *y)
{
	int top;
	top=*x+*y;
	return top;
}
