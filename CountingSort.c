#include <stdio.h>

void SimpleCountingSort(int arr[], int n, int k)
{
	int temp[k];
	for (int i = 0; i < k; i++)
	{
		temp[i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		temp[arr[i]] = temp[arr[i]] + 1;
	}

	int b = 0;

	for (int j = 0; j < k; j++)
	{
		for (int i = 0; i < temp[j]; i++)
		{
			arr[b] = j;
			b += 1;
		}
	}
}

int main(void)
{
	int arr[] = { 13, 12, 11, 11 };
	SimpleCountingSort(arr, 4, 14);

	for (int i = 0; i < 4; i++)
		printf("%d", arr[i]);

	return 0;
}


// Counting sort takes O(n+k) time and O(n+k) space, where n is the number of items we're sorting and k is the number of possible value.
