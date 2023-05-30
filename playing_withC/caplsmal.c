#include <stdio.h>

int main()
{
        char alpha;

        alpha = 'a';

        while (alpha <= 'z')
        {
                putchar(alpha);
                alpha++;
        }

        alpha = 'A';

        while (alpha <= 'z')
        {
                putchar(alpha);
                alpha++;
        }
        putchar('\n');
        putchar(36);
        return (0);
}

