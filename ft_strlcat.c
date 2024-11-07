#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t src_len;
    size_t dst_len;

    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);

    if (dst_len >= dstsize)
        return (dstsize + src_len);

    if (src_len < dstsize - dst_len)
        ft_memcpy(dst + dst_len, src, src_len + 1);
    else
    {
        ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
        dst[dstsize - 1] = '\0';
    }

    return (dst_len + src_len);
}
#include <stdio.h>
#include "libft.h"

int main()
{
    char dst[20] = "Hello, ";
    const char *src = "world!";
    size_t dstsize = sizeof(dst);  // Define the size of destination buffer

    printf("Before ft_strlcat:\n");
    printf("dst: \"%s\"\n", dst);
    printf("src: \"%s\"\n", src);

    size_t result = ft_strlcat(dst, src, dstsize);

    printf("\nAfter ft_strlcat:\n");
    printf("dst: \"%s\"\n", dst);
    printf("Length of resulting string: %zu\n", result);

    return 0;
}

