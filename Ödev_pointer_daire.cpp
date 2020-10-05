#include <stdio.h>
#define pi 3.141592653
void alan_hesapla(float *r, float *alan)
{
	float a,ycap;
	ycap=*r;
    a=(pi*ycap*ycap);
    *alan=a;
}
void cevre_hesapla(float*,float*);
int main()
{
	float r=0,alan=0,cevre=0;
	printf("Yaricapi giriniz: \n");
	scanf("%f",&r);
	alan_hesapla(&r,&alan);
	cevre_hesapla(&r,&cevre);
	printf("Alan: %f\n",alan);
	printf("Cevre: %f\n",cevre);
	return 0;
}
void cevre_hesapla(float *r, float *cevre)
{
	float a;
	float ycap=*r;
    a=2*pi*ycap;
    *cevre=a;
}
