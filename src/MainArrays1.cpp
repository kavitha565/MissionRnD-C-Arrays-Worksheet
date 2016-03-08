#include "FunctionHeadersArrays1.h"
#include <stdio.h>

int main(){

	//Test RemoveArraysDuplicates
	/*
	int arr[3] = { 1, 2, 7 };
	int len = removeArrayDuplicates(arr, 3);
	printf("%d", len);
	*/

	//Test Students Count
	
	/*int arr2[3]={1,4,10};
	int *newarray=sortedArrayInsertNumber(arr2, 3, 3);
	printf("%d %d %d %d", newarray[0], newarray[1], newarray[2],newarray[3]);*/
	
	// student count
		int Arr1[5] = { 10,20,30,40,50};
		int lessCount = 0;
		int moreCount = 0;
		studentsCount(Arr1,5,30,&lessCount,&moreCount);
		printf("number of students got more marks than given student%d\n", lessCount);
		printf("number of students got less marks than given student%d\n", moreCount);
	//sorted array position change
	int Arr2[10] = { 10, 20, 50, 40, 30 };
	sortedArrayPositionsChange(Arr2, 5);

	

	return 0;
}