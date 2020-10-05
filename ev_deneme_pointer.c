#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int *ptam,tam=33;
	ptam=&tam;
	printf("tam icerik: %d\n",tam);
	printf("tam adres: %p\n",&tam);
	printf("ptam icerik: %p\n",ptam);
	printf("ptam: %d\n",*ptam);
	
	return 0;
}
