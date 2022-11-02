#include "main.h"

/**
* AUTHOR: Alexander kiprop.
* DATE: 20 SEP 2022.
* EMAIL: Alexanderkiprop50@gmail.com
* _puts - print a string to stdout
* @str: char array string type
* Description: Can only use _putchar
*/

void _puts(char *str)
{
int estebantupapi;

for (estebantupapi = 0; str[estebantupapi] != '\0'; estebantupapi++)
{
_putchar(str[estebantupapi]);
}
_putchar('\n');
}
