#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *src;
    if(!s)
        return (NULL);
    if (start >= ft_strlen(s))
        return (ft_strdup(""));
    if(len > ft_strlen(s + start))
        len = ft_strlen(s + start);
    src = ft_calloc(len + 1 , sizeof(char));
    if(!src)
        return (NULL);
    ft_memcpy(src,s + start,len);
    return (src);
}
// #include "libft.h"
// #include <stdio.h>

// int main()
// {
//     char str[] = "Hello, Baby";
//     char *result = ft_substr(str, 5, 5);

//     printf("Dyali: %s\n", result);
//     //u dont need to free the resulte
//     return 0;
// }


