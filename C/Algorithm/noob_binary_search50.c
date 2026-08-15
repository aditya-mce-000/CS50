#include<stdio.h>

int search(int n, int arr[], int size);

int main()
{
    int arr[] = {12, 20, 30 , 45, 50, 60, 70};
    int size = (sizeof(arr)/sizeof(arr[1]));
    if (size % 2 != 0)
    {
    if (search(50, arr, size))
    {
        printf("found");
    }
    else
    {
        printf("Not Found");
    }
    }
    return 0;
}

int search(int n, int arr[], int size)
{
    if (arr[(size-1)/2] == n)
    {
        return 1;
    }

    if (size == 1)
    {
        return 0;
    }
    else 
    {
        size = (size-1)/2;
        for (int i = 0; i < (size); i++)
        {
            arr[i] = arr[i + size];
        }
        // size = (size-1)/2;
        return search(n, arr, size);
    }
}