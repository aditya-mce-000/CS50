#include <stdio.h>

int main()
{
    int arr[] = {1, 5, 2, 4, 32, 21, 12, 10, 123, 13, 12 };
    int num;
    printf("Enter the num you wanna find: ");
    scanf("%i", &num);
    int n = sizeof(arr)/sizeof(arr[1]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            printf("Found ar arr[%i]\n", i);
            return 0;
        }
    } 
    printf("Not found");
    return 1;
}