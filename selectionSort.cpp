/*selectionSort
	idea:
	creating a new empty array
		1. left unsorted array, right empty array 
		2. move most small number from left array to right array
		3. replace the move number from left array 2^31 (the max int)
	using the original array
		1. find the minimum number in the array
		2. swap the number to the index 0
		3. iterator to the next and keep repeating the same process
*/

#include <iostream>
using namespace std;

void selectionSort(int A[], int len){
	//loop thru the entire array 
	for(int i = 0; i<len-1; i++){
		int iMin = i; // elements from i till n-1
		//start from the next
		for(int j = i+1; j<len; j++){
			if(A[j] < A[iMin])
				iMin = j;
		}
		int temp = A[i];
		A[i] = A[iMin];
		A[iMin] = temp;
	}
}


int main(){
	int A[] = {7,8,9,5,3,4,6,2,1};

	for(int i=0; i < sizeof(A)/sizeof(A[0]); i++){
		printf("%d ", A[i]);
	}
	printf("\n");

	selectionSort(A, 9);
	
	for(int i=0; i < sizeof(A)/sizeof(A[0]); i++){
		printf("%d ", A[i]);
	}
	printf("\n");
}





