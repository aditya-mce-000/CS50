#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    // Getting a string
    char s[100];
    printf("s: ");
    // scanf("%s", s);
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';   // strip trailing newline


    if (s == NULL)
    {
        return 1;
    }

    // Allocate memory for another string
    char *t = malloc(strlen(s) + 1);
    if (t == NULL)
    {
        return 1;
    }

    // Copy string into memory
    strcpy(t, s);

    // Capitalize the first letter of the copy
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Print Strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // Free Memory
    free(t);
}
