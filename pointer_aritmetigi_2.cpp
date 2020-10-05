#include<stdio.h>
int main()
{
	char a[]="Esra Atlici";
	char *p;
	p=a;
	for(int i=0;i<=20;i++)
	{
		if(*(p+i)==NULL) ;
		else printf("%c",*(p+i));
	}
	return 0;
}
