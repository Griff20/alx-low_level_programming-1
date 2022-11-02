#include "main.h"

/**
* AUTHOR: Alexander kiprop.
* DATE: 20 SEP 2022.
* EMAIL: Alexanderkiprop50@gmail.com
* print_rev - print a string in reverse
* @s: char array string type
*/

void print_rev(char *s)
{
int tupapiesteban;

for (tupapiesteban = 0; s[tupapiesteban] != '\0'; tupapiesteban++)
;

for (tupapiesteban--; tupapiesteban >= 0; tupapiesteban--)
_putchar(s[tupapiesteban]);

_putchar('\n');
}
