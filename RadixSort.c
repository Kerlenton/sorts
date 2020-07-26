#include <stdio.h>

int find_largest(int arr[], size_t size)
{
    int largest = arr[0];
    for(size_t i = 1; i < size; i++)
        if(largest < arr[i])
            largest = arr[i];

   return largest;
}

void RadixSort(int arr[], size_t size)
{
    int i;
    int sorted[size];
    int n = 1;
    int largest = find_largest(arr, size);

    while(largest / n > 0)
    {
        int bucket[10] = {0};

        for (i = 0; i < size; i++)
            bucket[(arr[i] / n) % 10]++;

        for (i = 1; i < 10; i++)
            bucket[i] += bucket[i-1];

        for (i = size - 1; i >= 0; i--)
            sorted[--bucket[(arr[i] / n) % 10]] = arr[i];

        for (i = 0; i < size; i++)
            arr[i] = sorted[i];

        n *= 10;
    }
}

int main(void)
{
    int n[] = {462, 273, 1465, 722, 383};
    RadixSort(n, 5);

    for (int i = 0; i < 5; i++)
            printf("%d ", n[i]);

    return 0;
}

