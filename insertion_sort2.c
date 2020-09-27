#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int list[], int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (list[j] < list[j-1])
                swap(&list[j], &list[j-1]);
            else
                break;
        }
    }
}

int main(void)
{
    int num[] = { 2, 1, 5, 9, 11, 3 };
    
    sort(num, 6);  
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}


