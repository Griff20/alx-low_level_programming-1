#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* AUTHOR: Alexander kiprop.
* DATE: 20 SEP 2022.
* EMAIL: Alexanderkiprop50@gmail.com
*/
int main(void)
{
int myrand;
int count;
int total;
srand(time(NULL));
for (count = 0, total = 2772; total > 122; count++)
{
myrand = (rand() % 125) + 1;
printf("%c", myrand);
total -= myrand;
}
printf("%c", total);
return (0);
}
