int* sort(int* list, int length)
{
	int i, j, temp;

	for (i = 1; i < length; i++)
	{
		j = i - 1;

		while (j >= 0 && list[i] < list[j])
		{
			temp = list[i];
			list[i] = list[j];
			list[j] = temp;

			i = j;
			j--;
		}
	}
}

// Worst case: O(n^2)
// Average case: O(n^2)
// Best case: O(n)

// Stable, in place
