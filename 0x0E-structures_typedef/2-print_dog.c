#include <stdio.h>
#include "dog.h"

/**
* print_dog - Prints structure of dog
* @d: Name of dog
**/

void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
{
d->name = "(nil)";
}
if (d->owner == NULL)
{
d->owner = "(nil)";
}

printf("Name %s\n Age: %f\n Owner: %s\n", d->name, d->age, d->owner);
}
