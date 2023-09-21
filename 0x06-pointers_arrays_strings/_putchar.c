#include <unistd.h>
<<<<<<< HEAD

/**
   * _putchar - writes the character c to stdout
    * @c: The character to print
     *
      * Return: On success 1.
       * On error, -1 is returned, and errno is set appropriately.
        */
int _putchar(char c)
{
		return (write(1, &c, 1));
=======
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
>>>>>>> bc971a0496d3fba600f657d8061f7f404b483f3e
}
