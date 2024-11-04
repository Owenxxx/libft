#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
    int i;
    i = 0;
    char *lastowen;
    lastowen = NULL;

    while(s[i] != '\0')
    {
        if(s[i] == (char)c)
        {
            lastowen = (char *)&s[i];
        }
        i++;
    }
        if((char)c == '\0')
        {
            lastowen = (char *)&s[i];
        }
    return lastowen;
}
// #include <stdio.h>
// int main() {
//     char a[] = "    jhddkjdo;asf904265942";
//     printf("%s",ft_strrchr(a, 'a'));
//     return 0;
// }