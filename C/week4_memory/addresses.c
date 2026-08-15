#include <stdio.h>

int main(void)
{
    int n = 50 ;
    printf("%p\n", &n);
}

// %i is used for signed decimal integers (supporting both positive and negative numbers), while %u is used exclusively for unsigned decimal integers (zero and positive numbers only).