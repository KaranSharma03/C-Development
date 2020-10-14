/*
Author Name - Karan Sharma
Date - 13/10/2020
*/

#include <stdio.h>

void minus10(int *v);

int main()
{
	int value = 100;

	printf("Value is %d\n",value);
	minus10(&value);
	printf("Value is %d\n",value);

	return(0);
}

void minus10(int *v)
{
	*v = *v - 10;
}

