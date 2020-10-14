/*
Author Name - Karan Sharma
Date - 13/10/2020
*/

#include <stdio.h>

int main()
{
	int array[] = { 11, 13, 17, 19 };
	int *aptr;

	aptr = &array[2];

	printf("The element is %d\n",*aptr);

	return(0);
}

