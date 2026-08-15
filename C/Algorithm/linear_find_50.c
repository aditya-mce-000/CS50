#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 70, 90};
    // int mid = (sizeof(arr)/sizeof(arr[2]))/2;
    for (int i = 0; i < (sizeof(arr)/sizeof(arr[2])); i++)
    {
        if (arr[i] == 50)
        {
            printf("found at index %d\n", i);
            break;
        }
    }
    printf("Over\n");
    return 0;
}