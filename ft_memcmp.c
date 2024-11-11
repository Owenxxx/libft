#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i = 0;
    unsigned char *p1 = (unsigned char *)s1;
    unsigned char *p2 = (unsigned char *)s2;
    if(n == 0)
        return (0);
    while (i < n)
    {
        if (p1[i] != p2[i])
            return p1[i] - p2[i];
        i++;
    }
    return 0;
}