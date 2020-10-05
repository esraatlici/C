#include<stdio.h>
int main()
{
	char dizi[30];
	char *p,*begin,*end,*temp;
	int sayac=0;
	gets(dizi);
	p=dizi;
	end=dizi;
	begin=dizi;
	while(*p!=NULL)
	{
		sayac++;
		*end++;
	}*end--;
	printf("%c\n",*end);
	
	
	puts(p);
	return 0;
}
