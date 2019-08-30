#include <stdio.h>

int* sort(int* list, int length)
{
	int temp, i, j;

	for (j = 1; j < length; j++)
	{
		temp = list[j];
		i = j - 1;
		while (i >= 0 && list[i] > temp)
		{
			list[i + 1] = list[i];
			--i;
		}
		list[i + 1] = temp;
	}

	return list;
}

// Worst case: O(n^2)
// Average case: O(n^2)
// Best case: O(n)

// Stable, in place
