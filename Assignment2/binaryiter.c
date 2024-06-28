#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int numElems;
	int i;
	int find;
	printf("Jonathan de Koning, bzw879, <Sumemr 20204>\n");
	printf("Binary Search (Iterative Approach)\n");
	
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

	int low = 0;
	int high = numElems-1;
	int mid;
	int val;

	while(low <= high) {
		mid = (low+high)/2;
		val = nums[mid];

		if (val == find) {
			printf("Element found at (1 based) index %d\n", mid+1);
			break;
		}

		if (val < find) 
			low = mid+1;
		if (val > find)
			high = mid-1;
	}
	double endTime = clock();
	printf("Total time taken by CPU (End Time - Start Time) / clock per_sec: %lf\n", (endTime-startTime)/CLOCKS_PER_SEC);
	return 0;
}
