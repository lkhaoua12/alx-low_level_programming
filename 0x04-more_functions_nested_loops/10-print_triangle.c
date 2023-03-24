#include <main.h>

/**
 * main - Entry point
 *
 * Return: ALways 0
 */

void print_triangle(int size)
{
    int i;
    
    for (i = 0; i <= size; i++)
    {
        int b;
        for (b = 0; b <= size; b++)
        {
            if (i + b < size)
            _putchar(' ');
            else
            _putchar('#');
        }   
        _putchar('\n');
    }   
}   
