<<<<<<< HEAD
#include <unistd.h>

=======
#include "main.h"
#include <unistd.h>
>>>>>>> 6b291279cdabc92a118f6f9bc77365f7b300d731
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
<<<<<<< HEAD
 * On error, -1 is returned, and errno is set appropriately.
=======
 * On error, -1 is returned, and errno is set approprialy.
>>>>>>> 6b291279cdabc92a118f6f9bc77365f7b300d731
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
