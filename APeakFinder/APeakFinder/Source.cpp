#include <stdio.h>

int findAPeak(int* arr, int length);
int findAPeakBinarySearch(int* arr, int length);

int main()
{
	//int arr[5] = { 3, 4, 6, 5, 2 };
	int arr[7] = { 3, 4, 5, 6, 7, 8, 5 };

	int peak_val = findAPeak(arr, 7);
	printf("\nPeak Value is %d", peak_val);

	int peak_val_bin = findAPeakBinarySearch(arr, 7);
	printf("\nPeak Value is %d", peak_val_bin);

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

int findAPeakBinarySearch(int* arr, int length)
{
	if (arr[length / 2] < arr[length / 2 - 1])
	{
		return findAPeakBinarySearch(arr, length/2 - 1);
	}
	else if (arr[length / 2] < arr[length / 2 + 1])
	{
		return findAPeakBinarySearch(&(arr[length / 2 + 1]), length / 2 - 1);
	}
	else
		return arr[length / 2];
}