#include "main.h"
#include <stdio.h>
/**
* AUTHOR: Alexander kiprop.
* DATE: 20 SEP 2022.
* EMAIL: Alexanderkiprop50@gmail.com
* main - check the code
* Return: Always 0.
*/
int main(void)
{
char *str;
int len;

str = "My first strlen!";
len = _strlen(str);
printf("%d\n", len);
return (0);
}
