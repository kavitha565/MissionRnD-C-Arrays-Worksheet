/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>
void merge_sort(int a[], int low, int mid, int high)
{
	int l, m, k, temp[20], i;
	i = low;
	l = low;
	m = mid + 1;
	while (l <=mid&&m <=high)
		temp[i++] = (a[l] < a[m]) ? a[l++] : a[m++];
	if (l < m)
	{
		for (k = l; k < m; k++)
		{
			temp[i] = a[k];
			i++;
		}
	}
	if (m < high)
	{
		for (k = m; k < high; k++)
		{
			temp[i] = a[k];
			i++;
		}
	}
	while (l <= m)
		temp[i++] = a[l++];
	while (m <= high)
		temp[i++] = a[m++];
	for (k = low; k <=high; k++)
		a[k] = temp[k];

}
void part(int a[], int low, int high)
{
	int mid;
	if (low < high)
	{
		mid = (low + high) / 2;
		part(a, low, mid);
		part(a, mid + 1, high);
		merge_sort(a, low, mid, high);
		
	}
}

void * sortedArrayPositionsChange(int *Arr, int len)
{
	int i, j, temp;
	if (len < 1 || len == 1||Arr==NULL)
		return NULL;
	else
	{
		part(Arr, 0, len - 1);
	}
	/*for (i = 0; i < len; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			if (Arr[i]>Arr[j])
			{
				temp = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = temp;
			}
		}
		printf("%d\n", Arr[i]);
	}*/

}