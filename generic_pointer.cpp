#include<stdio.h>
int main()
{
	char kar='a';
	int tam=66;
	double ger=1.2;
	void *veri;
	veri=&kar;
	printf("kar:veri %c karakter degeri \n",*(char*)veri);
	veri=&tam;
	printf("tam:veri %d karakter degeri \n",*(int*)veri);
	veri=&ger;
	printf("ger:veri %f karakter degeri \n",*(double*)veri);
}
