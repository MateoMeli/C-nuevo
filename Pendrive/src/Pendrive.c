/*
 ============================================================================
 Name        : Pendrive.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Pen.h"

int main() {
	setbuf(stdout, NULL);

	ePendrive* pen;
	pen = pendrive_new();

	printf("\n Codigo: %2d", pen->codigo);
	printf("\n Marca: %s", pen->marca);
	printf("\n Modelo: %s", pen->modelo);
	printf("\n Capacidad: %d", pen->capacidad);

	free(pen);

	return 0;
}




