#include <stdio.h>

void swap(int *x, int *y)
{
	int z = *x;
	*x = *y;
	*y = z;
}

int max_heap(int arr[], int n, int i)
{
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;

	if (l < n && arr[l] > arr[largest])
		largest = l;
	if (r < n && arr[r] > arr[largest])
		largest = r;
	if (largest != i)
	{
		swap(&arr[i], &arr[largest]);
		max_heap(arr, n, largest);
	}
}

void heap_sort(int arr[], int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
		max_heap(arr, n, i);
	for (int j = n - 1; j > 0; j--)
	{
		swap(&arr[0], &arr[j]);
		max_heap(arr, j, 0);
	}
}

int main(void)
{
	int arr[] = { 1, 2, 1, 6, 3 };
	heap_sort(arr, 5);

	for (int i = 0; i < 5; i++)
		printf("%d", arr[i]);

	return 0;
}