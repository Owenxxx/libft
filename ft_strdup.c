#include "libft.h"
char *ft_strdup(const char *s1)
{
    char    *dest;
    size_t  len;

    len = ft_strlen(s1);
    dest = (char *)malloc(len + 1);
    if (!dest)
        return (NULL);
    ft_memcpy(dest, s1, len + 1);
    return (dest);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include "libft.h"

// int main()
// {
//   printf("Mine: %s\n", ft_strdup("asdiagsudoahia"));
//   printf("orig: %s\n", strdup("asdiagsudoahia"));
// }
