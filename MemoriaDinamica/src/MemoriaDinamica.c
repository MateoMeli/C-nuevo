/*
 ============================================================================
 Name        : MemoriaDinamica.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 4


int main(void) {

	setbuf(stdout, NULL);

	int tam = TAM;
	int* a;
	int* aux;
	int i;
	a = (int*) malloc(sizeof(int)*TAM);

	if(a != NULL)
	{
		for(i = 0; i < TAM; i ++)
		{
			*(a+i) = 0;
		}
	}

	aux = (int*) realloc(a, (TAM + 4) * sizeof(int));

	if(aux != NULL)
	{
		tam = TAM + 4;
		a = aux;
	}else{
		printf("No queda memoria.\n");
	}


	for(i = 0; i < tam; i ++)
	{
		printf("%d\n", *(a+i));
	}

	free(a);

	return EXIT_SUCCESS;
}
