#include "main.h"
#include <stdio.h>

/*
* AUTHOR: Alexander kiprop.
* DATE: 20 SEP 2022.
* EMAIL: Alexanderkiprop50@gmail.com
* main - check the code
* Return: Always 0.
*/
int main(void)
{
char s[10] = "My School";

printf("%s\n", s);
rev_string(s);
printf("%s\n", s);
return (0);
}
