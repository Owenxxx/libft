#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t needle_len = ft_strlen(needle);
    // if(haystack == NULL || needle == NULL)
    // {
    //     return NULL;
    // }
    if (needle_len == 0) {
        return (char *)haystack;
    }
    size_t i = 0;
    while (i < len && haystack[i] != '\0') 
    {
        if (i + needle_len <= len && ft_strncmp(&haystack[i], needle, needle_len) == 0)
        {
            return (char *)&haystack[i];
        }
        i++;
    }
    return NULL;
}
// #include	<string.h>

// int main() 
// {
//     // const char haystack[];
//     // const char *needle;
//     // size_t len;

//     printf("my fct: %s\n", ft_strnstr("hello","hello",10));
//     printf("the originale :%s\n", ft_strnstr("hello","hello",10));
// }
