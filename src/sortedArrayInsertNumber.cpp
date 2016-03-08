/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include <malloc.h>
//int *newarray = (int*)malloc(3 * sizeof(int));
int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	
	int i,m,pos;
	if (len<1||Arr==NULL)
	return NULL;
	for (i = 0; i < len; i++)
	{
		if (num < Arr[i])
		{
			pos = i;
			break;
		}
		if (num > Arr[len - 1])
		{
			pos = len;
			break;
		}
	}
	if (pos != len)
	{
		m = len - pos + 1;
		for (i = 0; i <= m; i++)
		{
			Arr[len - i + 2] = Arr[len - i + 1];
		}
	}
	Arr[pos] = num;
	//int *newarray = (int*)realloc(Arr, 4);
	return(Arr);
}
