#include "holberton.h"

/**
 * rot13 - encode string with rot13
 * @src: string to encode
 * Return: string
 **/

char *rot13(char *src)
{
        char c[] = {"NOPQRSTUVWXYZABCDEFGHIJKLM[\\]^_`nopqrstuvwxyzabcdefghijklm"};

        int i;

        for (i = 0; src[i] != '\0'; i++)
        {
                if (src[i] >= 'A' && src[i] <= 'z')
                        src[i] = c[src[i] - 'A'];
        }
        return (src);
}
