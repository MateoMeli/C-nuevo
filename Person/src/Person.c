#include <stdio.h>
#include <stdlib.h>
#include "Person.h"
/*Array de Estructura en memoria dinamica*/
/*Constructor*/

int main()
{
    Person* personArray[3];
    int i;
    for(i = 0; i < 3; i++)
    {
        personArray[i] = person_new();//0,0);
    }
    for(i = 0; i < 3; i++)
    {
        person_setAge(personArray[i],i);
        person_setSomething(personArray[i],i);
    }
    for(i = 0; i < 3; i++)
    {
        printf("\nAge: %2d",person_getAge(personArray[i]));
        printf("\nSomething : %2d",person_getSomething(personArray[i]));
    }
    //Libero la memoria dinamica
    for(i = 0; i < 3; i++)
    {
        person_free(personArray[i]);
    }

    return 0;
}
