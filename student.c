#include "student.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/*This function finds the square of the smallest element by first finding the minimum element by traversing the array,
  and then squaring the minimum found.  The runtime will be O(n).*/
int squareOfSmallest(int array[], int length) {
	int min = array[0];
	for(int i = 0; i < length; i++) {
		if(array[i] < min) {
			min = array[i];
		}
	}
	
	return min * min;
}

/*This function tries to find the minimum element in the array by iterating through the array, tracking the current minimum
  as the iteration progresses.  The runtime will be O(n).*/
int findMin(int *nums, int numsSize) {
	int min = nums[0];
	for (int i = 0; i < numsSize; i++) {
		if (nums[i] < min) {
			min = nums[i];
		}
	}
	return min;
}

/*This function checks if a string is a palindrome by iterating forwards from index 0 and backwards from the last index, tracking
  if the value at both pointers match.  This is done until the right pointer is to the left of the left pointer.  The runtime of 
  this function is O(n), as we visit each element once.*/
bool isPalindrome(char str[]) {
	if (strlen(str) == 1) {
		return true;
	}

	char* p1 = str;
	char* p2 = str + strlen(str) - 1;
	while (p1 < p2) {
		if (*p1 != *p2) {
			return false;
		}
		p1++;
		p2--;

	}
	return true; 
}

/*This function tracks the frequency of a particular character.  It does so by iterating through the array, and keeping note of
  how many times that particular character appears.  The runtime is O(n).*/
int freqOfChar(char str[], char key){
	int count = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == key) {
			count += 1;
		}
	}
	return count;
}

/*This function uses Bubble Sort to sort the array.  Bubble sort moves the largest number to the right each time, iterating through the
  entire array n times.  The runtime of this function is O(n^2), as there is a nested loop.*/
void sort(int array[],int length){
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length - i - 1; j++) {
			if (array[j] > array[j+1]) {
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}

/*This function attempts to find two numbers in the array that adds up to the target number.  This can be achieved by iterating though the 
  array using a nested loop to compare each combination of numbers.  When the specific combination is found, an array of the solutions is
  returned.  The malloc() function is used to create a global variable.  The runtime is O(n^2).*/
int* twoSum(int* nums, int numsSize, int target){
	int* sol = malloc(2*sizeof(int));
	for (int i = 0; i < numsSize - 1; i++) {
		for (int j = i + 1; j < numsSize; j++) {
			if (nums[i] + nums[j] == target) {
				sol[0] = nums[i];
				sol[1] = nums[j];
				return sol;
			}
		}
	}
	
	return NULL;
}

/*This function attempts to find the values corresponding to the array of pointers, and then adds them to the input array to yield a new array.
  The malloc() function is used to create a new global variable, and the function iterates through each value in the input array and adds it to 
  the values corresponding to the pointers.  The runtime is O(n).*/
int* decryptPointer(int array[], int length, int *key[]){
	int* sol = malloc(length*sizeof(int));
	for (int i = 0; i < length; i++) {
		sol[i] = array[i] + *key[i];
	}

	return sol;
}




