#include<stdio.h>
double ort(double dizi[],int x)
{
	double top;
	double *p;
	p=dizi;
	for(int i=0;i<5;i++)
	{
		top=+*(p+i);
	}
	return (top/5);
}
int main()
{
	double a[5]={1.1,2.2,3.3,4.4,5.5};
	double c=0.0;
	c=ort(a,5);
	printf("%f\n",c);
	return 0;
}


