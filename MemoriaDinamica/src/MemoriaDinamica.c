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



int main(void) {

	setbuf(stdout, NULL);

	int* a;
	int i;
	a = (int*) malloc(sizeof(int)*20);

	if(a != NULL)
	{
		for(i = 0; i < 20; i ++)
		{
			*(a+i) = 0;
		}
	}

	return EXIT_SUCCESS;
}
