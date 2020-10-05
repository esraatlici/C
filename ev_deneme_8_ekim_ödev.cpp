#include<stdio.h>
#include<math.h>
int hesapla(char gln[])
{
	char *p;
	p=gln;
	//printf("%p\n",p);
	int top=0,indeks=0,sayac=0;
    while(*p!=NULL)
	{
		*p++;
		sayac++;
	}
    *p--;
    //printf("sayac: %d\n",sayac);
    //printf("%c\n",*p);
	while(sayac>0)
	{
		//printf("%d\n",*p);
		if(*p!='0')
		{
			top+=pow(2,indeks);
			//printf("ab: %d\n",top);
		}
		*p--;
		indeks++;
		//indeks=pow(2,indeks);
		//printf("indeks: %d\n",indeks);
		sayac--;
	}
	//printf("aa: %d\n",top);
	return top;	
}

int main()
{
	char dizi[20];
	printf("Enter: ");
	gets(dizi);
//	printf("%d\n",d);
	//printf("%p\n",&dizi);
	int a=hesapla(dizi);
	printf("Result: %d\n",a );
	return 0;
}
