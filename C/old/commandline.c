#include <stdio.h>

int main(int argc, int argv[])
{
    if (argc >= 2)
    {
        printf("%i", argv[1]);
        return 0;
    }
    else
    {
        printf("You are done.");
    }
}