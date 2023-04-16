#include "main.h"
#include <unistd.h>

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
}

/**
 * _puts - prints an integer to stdout
 * @num: The integer to print
 *
 * Return: void
 */
void _puts(int num)
{       
        if (num < 10)
        {       
                _putchar(num + '0');
        }        
        else
        {       
                _puts(num / 10);
                _putchar(num % 10 + '0');
        }
}

/**
 * my_isspace - checks if the character is a whitespace character
 * @c: The character to check
 *
 * Return: 1 if c is a whitespace character, otherwise 0
 */
int my_isspace(char c) {
    return (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f' || c == '\v');
}

/**
 * _atoi - converts a string to a long long integer
 * @num: The string to convert
 *
 * Return: The long long integer converted from num
 */
long _atoi(char *num)
{
        int chek = 1;
        int i = 0;
        long result = 0;
        
        while (my_isspace(num[i]))
                i++;
        if (num[i] == '-')
        {
                chek = -1;
                i++;
        }
        
        for (; num[i] != '\0'; i++)
        {
        if (num[i] >= '0' && num[i] <= '9')
                {
                        result *= 10;
                        result += num[i] - '0';
                }
        else 
                return (0);
        }
        result *= chek;
        return (result);
}

/**
 * _otherputs - prints a string to stdout
 * @exitt: The string to print
 *
 * Return: void
 */
void _otherputs(char *exitt)
{
        int i;
 
        for (i = 0; exitt[i]; i++)
        {
                _putchar(exitt[i]);
        }
}
 
/**
 * main - multiplies two numbers passed as arguments
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success, otherwise 98
 */
int main(int argc, char **argv)
{
        long result;
        char *exitt = "Error\n";
 
        if (argc != 3)
        {
                _otherputs(exitt);
                exit(98);
        }
        if(!_atoi(argv[1]) || !_atoi(argv[2]))
        {
                _otherputs(exitt);
                exit(98);
        }
        result = (_atoi(argv[1]) * _atoi(argv[2]));
        _puts(result);
        _putchar('\n');
        return (0);
}

