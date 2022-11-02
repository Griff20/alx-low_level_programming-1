#include "main.h"

/**
* AUTHOR: Alexander kiprop.
* DATE: 20 SEP 2022.
* EMAIL: Alexanderkiprop50@gmail.com
* _strlen - return the length of the string
* @s: char type pointer
* Return: length of string
*/

int _strlen(char *s)
{
int estebantupapi;
for (estebantupapi = 0; s[estebantupapi] != '\0'; estebantupapi++)
;

return (estebantupapi);
}
