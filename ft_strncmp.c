#include "libft.h"
#include <stdio.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;
    if (n == 0)
    {
        return 0;
    }

    while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
    {
        if ((unsigned char)s1[i] != (unsigned char)s2[i])
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
            i++;
    }
    return 0;
}
// #include <stdio.h>
// int main ()
// {
//     printf("%d",ft_strncmp("ousssss","ous", 6));
//     return 0;
// }