#include "main.h"
#include <stdio.h>

/**
* AUTHOR: Alexander kiprop.
* DATE: 20 SEP 2022.
* EMAIL: Alexanderkiprop50@gmail.com
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
char s1[98];
char *ptr;

ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
printf("%s", s1);
printf("%s", ptr);
return (0);
}
