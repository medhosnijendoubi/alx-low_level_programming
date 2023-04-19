#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @f: struct dog to print
 */
void print_dog(struct dog *f)
{
	if (f == NULL)
		return;

	if (f->name == NULL)
		f->name = "(nil)";
	if (f->owner == NULL)
		f->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", f->name, f->age, f->owner);
}

