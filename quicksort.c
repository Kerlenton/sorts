#include <stdint.h>
#include <stdio.h>

void swap(int list[], size_t x, size_t y)
{
	int temp = list[x];
	list[x] = list[y];
	list[y] = temp;
}

void sort(int list[], int left, int right)
{
	int i, last;
	if (left >= right)
		return;
	swap(list, left, (left + right) / 2);
	last = left;
	for (i = left + 1; i <= right; i++)
		if (list[i] < list[left])
		{
			swap(list, ++last, i);
		}
	swap(list, left, last);
	sort(list, left, last - 1);
	sort(list, last + 1, right);
}

// Worst case: O(n2)
// Best case: O(n log n) 
// Average: O(n log n)
