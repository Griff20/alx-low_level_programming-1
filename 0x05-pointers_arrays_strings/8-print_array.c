#include "main.h"
#include <stdio.h>

/**
* AUTHOR: Alexander kiprop.
* DATE: 20 SEP 2022.
* EMAIL: Alexanderkiprop50@gmail.com
* print_array - print `n` elements of an array of integers
* @a: int type array pointer
* @n: int type integer
* Description: Numbers must be separated by comma and space.
* Numbers should be displayed in the same order they are stored in array.
* You can only use _putchar to print.
*/

void print_array(int *a, int n)
{
int tupapiesteban;

tupapiesteban = 0;
for (n--; n >= 0; n--, tupapiesteban++)
{
printf("%d", a[tupapiesteban]);
if (n > 0)
{
printf(", ");
}
}
printf("\n");
}
