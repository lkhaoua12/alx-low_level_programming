#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{       
        int i;
	char *stri;
        va_list p;
        
        if (!n)
        {       
                printf("\n");
                return;
        }
        va_start(p, n);
        for (i = n; i > 1; i--)
        {       
                printf("%s%s", (stri = va_arg(p, char *)) ? stri : "(nil)", separator ? separator : "");
        }
        printf("%s\n", (stri = va_arg(p, char *)) ? stri : "(nil)");
        va_end(p);   
}

