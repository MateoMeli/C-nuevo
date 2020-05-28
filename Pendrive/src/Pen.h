/*
 * Pen.h
 *
 *  Created on: 27 may. 2020
 *      Author: RYZEN
 */

#ifndef PEN_H_
#define PEN_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
	int codigo;
	char marca[31];
	char modelo[31];
	int capacidad;
}ePendrive;

ePendrive* pendrive_new();

#endif /* PEN_H_ */
