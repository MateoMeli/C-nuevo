#include "Pen.h"

ePendrive* pendrive_new()
{
	ePendrive* this;
	this = (ePendrive*) malloc (sizeof(ePendrive));

	if(this != NULL)
	{
		this->codigo = 0;
		strcpy(this->marca, "");
		strcpy(this->modelo, "");
		this->capacidad = 0;
	}

	return this;
}
