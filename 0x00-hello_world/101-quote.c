#include <unistd.h>
/* The comment betty has been waiting for */

int main(void)
{
/*Assigning value to param*/
int param = 1;
/*printing to std error*/
write(2,
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
/*returning assigned param*/
return (param);
}

