#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binarySearch(int nums[], int low, int high, int find)
{
	int mid = (high+low)/2;
	int val = nums[mid];

	if (val == find)
		return mid;

	if (val > find)
		return binarySearch(nums, low, mid-1, find);

	return binarySearch(nums, mid+1, high, find);
}

int main() {
	int numElems;
	int i;
	int find;

	printf("Jonathan de Koning, bzw879\n");
	printf("Binary Search (Recursive Approach)\n");
	
	printf("Enter number of elements (bonus points?!?!):\n");
	scanf("%d", &numElems);
	
	printf("Enter %d elements:\n", numElems);

	int nums[numElems];
	for (i=0; i<numElems; i++) {
		scanf("%d", &nums[i]);
	}

	printf("Enter element to search:\n");
	scanf("%d", &find);

	double startTime = clock();
	int idx = binarySearch(nums, 0, numElems-1, find);
	double endTime = clock();

	printf("Element found at (1 based) index %d\n", idx+1);
	printf("Total time taken by CPU (End Time - Start Time) / clock per_sec: %lf\n", (endTime-startTime)/CLOCKS_PER_SEC);
	return 0;
}
