#include <stdio.h>
#include <string.h>

int main(void)
{
    char *i = "Hi!";
    char *j = "Hi!";

    if (strcmp(i,j) == 0)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
}