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
		//	if(*p!='�') *p=' ';
			if(*p!='i') //*p=' ';
			if(*p!='o') //*p=' ';
		//	if(*p=='�') *p=' ';
		//	if(*p!='�') *p=' ';
			printf("%c",*p);
			*p++;	    		
	}
	//puts(dizi);
	return 0;
}
