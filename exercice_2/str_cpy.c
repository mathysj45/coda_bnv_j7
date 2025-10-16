#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

char *str_cpy(char * str)
{
    int len = str_len(str);
    char * copy = malloc((len+1) * sizeof(char));
    copy [len] = '\0';
    int i = 0;
    while (str[i] != '\0')
    {
        copy[i] = str[i];
        i++;
    }
    return(copy);
}