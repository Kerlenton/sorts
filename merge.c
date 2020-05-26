#include <stdlib.h>

void merge(int *A, int *L, int leftc, int *R, int rightc)
{
	int i, j, k;
	i = 0; j = 0; k = 0;

	while (i < leftc && j < rightc)
	{
		if (L[i] < R[j]) A[k++] = L[i++];
		else A[k++] = R[j++];
	}

	while (i < leftc) A[k++] = L[i++];
	while (j < rightc) A[k++] = R[j++];
}

void mergesort(int *A, int n)
{
	int mid, i, *L, *R;
	if (n < 2) return;
	mid = n / 2;

	L = (int*)malloc(mid * sizeof(int));
	R = (int*)malloc((n-mid) * sizeof(int));


	for (i = 0; i < mid; i++) L[i] = A[i];
	for (i = mid; i < n; i++) R[i - mid] = A[i];

	mergesort(L, mid);
	mergesort(R, n - mid);
	merge(A, L, mid, R, n - mid);
}
