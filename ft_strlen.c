#include <stdio.h>

size_t ft_strlen(const char *s)
{
    size_t i;
    while (s[i] != '\0') {
        ++i;
    }
    return i;
}

int main()
{
 	char str[] = "Life is good.";
 	int result = ft_strlen(str);
 	printf("The length of the string is %d.\n", result);
 	return 0;
}