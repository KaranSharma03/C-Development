/*
Author Name - Karan Sharma
Date - 13/10/2020
*/

#include <stdio.h>

int main()
{
    int a,b;
    int *ptr;

    ptr = &a;
    *ptr = 1234;
    ptr = &b;
    *ptr = 4567;

    printf("A is %d and B is %d\n",a,b);

    return(0);
}
