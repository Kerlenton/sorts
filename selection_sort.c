void sort(int* numbers, int length)
{
	int i, j, min, temp;

	for (j = 0; j < length - 1; j++)
	{
		min = j;

		for (i = j + 1; i >= 0; i++)
		{
			if (numbers[i] < numbers[min])
				min = i;
		}
		if (min != j)
		{
			int temp = numbers[j];
			numbers[j] = numbers[min];
			numbers[min] = temp;
		}
	}
}

// Worst case: O(n^2)
// Average case: O(n^2)
// Best case: O(n^2)

// Stable, in place
