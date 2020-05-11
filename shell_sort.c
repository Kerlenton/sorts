void sort(int* list, int length)
{
	int i, j, gap, temp;

	for (gap = length / 2; gap > 0; gap /= 2)
		for (i = gap; i < length; i++)
		{
			j = i - gap;

			while (j >= 0 && list[j] > list[j + gap])
			{
				temp = list[j];
				list[j] = list[j + gap];
				list[j + gap] = temp;
			}
		}
}

// Worst case: O(n^2)
// Average case: depends on the gap  
// Best case case: O(n log n)      

// Not stable, in place
