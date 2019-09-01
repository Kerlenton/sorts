#include <stdint.h>

void sort(int* list, int length)
{
	uint8_t temp;
	for (size_t i = 0; i < length; i++)
		for (size_t j = 0; j < length - i - 1; j++)
			if (list[j] > list[j + 1])
			{
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
}
