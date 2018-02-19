#include <stdio.h>

int findAPeak(int* arr, int length);

int main()
{

	int arr[5] = { 3, 4, 6, 5, 2 };

	int peak_val = findAPeak(arr, 5);
	printf("\nPeak Value is %d", peak_val);

	return 0;
}

int findAPeak(int* arr, int length)
{
	for (int i = 1; i < length - 1; i++)
	{
		if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
		{
			return arr[i];
		}
	}

	return -1;
}