/*
 * Person.h
 *
 *  Created on: 27 may. 2020
 *      Author: RYZEN
 */

#ifndef PERSON_H_
#define PERSON_H_

typedef struct
{
	int age;
	int something;
}Person;

Person* person_new();

void person_setAge(Person* , int age);
int person_getAge(Person* );

void person_setSomething(Person* , int something);
int person_getSomething(Person* );

void person_free(Person*);
#endif /* PERSON_H_ */

Person* person_new()
{
	Person* this;
	this = (Person*) malloc (sizeof(Person));
	if(this != NULL)
	{
		this->age = 0;
		this->something = 0;
	}


	return this;
}

void person_setAge(Person* this, int age)
{
	if(age >= 0)
	{
		this->age = age;
	}
}

int person_getAge(Person* this)
{
	return this->age;
}

void person_setSomething(Person* this, int something)
{
	if(something >= 0)
	{
		this->something = something;
	}
}

int person_getSomething(Person* this)
{
	return this->something;
}


void person_free(Person* this)
{
	free(this);
}
