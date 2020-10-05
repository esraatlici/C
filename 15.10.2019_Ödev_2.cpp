#include<stdio.h>
int main()
{
	char dizi[40];
	char *p,*q,t;
	int sayac=0;
	printf("Enter: ");
	gets(dizi);
	p=q=dizi;
	while(*q){sayac++;*q++;}
	printf("syac:%d",sayac);
	for(int i=0;i<sayac;i++)
	{
		for(int j=i+1;j<sayac;j++)
		{
			if(*(p+i)>*(p+j))
			{
				t=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=t;
				//puts(dizi);
			}
		}
	}
	puts(dizi);
	return 0;
}
