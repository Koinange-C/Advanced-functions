//finding largest element in array using function pointers
#include<stdio.h>
#include<stdlib.h>

void findLargest(int *arr, int N);

//driver code
int main() {
	int i, N = 4;

	int* arr;

	//memory allocation to arr
	arr = (int*)calloc(N, sizeof(int));

	//condition for no memory
	//allocation
	if (arr == NULL) {
		printf("No memory allocated");
		exit(0);
	}
	
	//store the elements
	*(arr + 0) = 14;
	*(arr + 1) = 12;
	*(arr + 2) = 19;
	*(arr + 3) = 20;

	//function call
	findLargest(arr, N);
	return 0;
}


void findLargest(int* arr, int N) {
	int i;

	//Transverse the array
	for(i = 0; i < N; i++){
		//update the largest element
		if(*arr < *(arr + i)){
			*arr = *(arr + i);
		}
	}
	//print largest number
	printf("%d\n", *arr);
}


