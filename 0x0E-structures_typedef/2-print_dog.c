#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - printf dog
 * @d: dog to print
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(ni)");
		printf("Age: %f\n", (d->age) ? d->age :  0);
		printf("owner: %s \n", (d->owner) ? d->owner : "(nil)");

	}
}
