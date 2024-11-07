#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t src_l;
    src_l = ft_strlen(src);
    if (dstsize > 0)
    {
        if (src_l >= dstsize)
        {
            ft_memcpy(dst, src, dstsize);
            dst[dstsize -1] = '\0';
        }
        else 
        {
            ft_memcpy(dst, src, src_l + 1);
        }
    }

    return src_l;
}
// #include <string.h>
// int main(void) {
//     char src[] = "gdhbrtsbrwnrsnbrsbns, world!";
//     char dst[20];
//     size_t result1;
//     size_t result2;

//     result1 = ft_strlcpy(dst, src, sizeof(dst));
//     result2 = strlcpy(dst, src, sizeof(dst));

//     printf("dyali\n");
//     printf("Copied string: %s\n", dst);
//     printf("Length of source: %zu\n", result1);
//     printf("dyalhom\n");
//     printf("Copied string: %s\n", dst);
//     printf("Length of source: %zu\n", result2);

//     return 0;
// }
