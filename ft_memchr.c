#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr = s;
    unsigned char uc = (unsigned char)c;

    while (n) {
        if (*ptr == uc) {
            return (void *)ptr;
        }
        ptr++;
        n--;
    }
    return NULL;
}