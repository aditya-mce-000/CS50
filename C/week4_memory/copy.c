#include <stdio.h>
#include <ctype.h>
// #include <string.h>

int main(void)
{
    char s[] = "hello";
    char *t = s;

    t[0] = toupper(*t);

    printf("s = %s\n", s);
    printf("t = %s\n", t);

    return 0;
}