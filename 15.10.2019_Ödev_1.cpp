#include<stdio.h>
int main()
{
	char dizi[30];
	char *p;
	printf("Enter: ");
	gets(dizi);
	p=dizi;
	while(*p)
	{
	
		    if(*p!='a') //*p=' ';
			if(*p!='e') //*p=' ';
			if(*p!='u') //*p=' ';
		//	if(*p!='ý') *p=' ';
			if(*p!='i') //*p=' ';
			if(*p!='o') //*p=' ';
		//	if(*p=='ü') *p=' ';
		//	if(*p!='ö') *p=' ';
			printf("%c",*p);
			*p++;	    		
	}
	//puts(dizi);
	return 0;
}
