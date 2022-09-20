#include "student.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int squareOfSmallest(int array[], int length) {
	int min = array[0];
	for(int i = 0; i < length; i++) {
		if(array[i] < min) {
			min = array[i];
		}
	}
	
	return min * min;
}

int findMin(int *nums, int numsSize) {
	int min = nums[0];
	for (int i = 0; i < numsSize; i++) {
		if (nums[i] < min) {
			min = nums[i];
		}
	}
	return min;
}

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

int freqOfChar(char str[], char key){
	int count = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == key) {
			count += 1;
		}
	}
	return count;
}

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

int* decryptPointer(int array[], int length, int *key[]){
	int* sol = malloc(length*sizeof(int));
	for (int i = 0; i < length; i++) {
		sol[i] = array[i] + *key[i];
	}

	return sol;
}




