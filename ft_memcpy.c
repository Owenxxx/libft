#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
        size_t          i;
        unsigned char *dst_p;
        unsigned char *src_p;
    if(dst == NULL && src == NULL)
    {
        return NULL;
    }
        src_p = (unsigned char *)src;
        dst_p = (unsigned char *)dst;
    i = 0;
    while(i < n)
    {
        dst_p[i] = src_p[i];
        i++;
    }
    return(dst);
}
// #include <string.h>
// int main()
// {
//     char src[] = "Hiiii!";
//     char dst[50];

//     ft_memcpy(src, src, sizeof(src));
//     memcpy(src, src, sizeof(src));
//     printf("Copied string: %s\n", dst);
//     printf("Copied string in original: %s\n", dst);
//     return 0;
// }
