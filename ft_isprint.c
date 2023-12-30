#include <stdio.h>

int ft_isprint(int c) {
    if (c >= 32 && c <= 126) {
    return (1);
  } else { return (0);}
}

int main() {
    char c;

    c = 'J';

    if (ft_isprint(c)) {
        printf("%c is a printable character.\n", c);
    } else {
        printf("%c is not a printable character.\n", c);
    }

    return 0;
}
