#include <stdio.h>

typedef char *string;// this means that thereafter char* cn be called string

int main(void)
{
    string s = "Hello";
    for (int i = 0; s[i] != '\0'; i++)
    {
        printf("%c", s[i]);    
    }
    return 0;
}