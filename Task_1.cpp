#include<iostream>
using namespace std;

void printArray(int *arr,int s);
void selectionSort(int *arr,int s);

int main() {
	// Test with an integer array of size 5
	const int size = 5;
	int intArray[size] = { 64, 25, 12, 22, 11 };
	cout << "Original integer array: ";
	printArray(intArray,size);
	selectionSort(intArray,size);
	cout << "Sorted integer array: ";
	printArray(intArray,size);

	
	return 0;
}

void printArray(int arr[],int s){
	for (int i = 0; i < s; i++)
	{
		cout << arr[i] << " ";
	}

}



void selectionSort(int *arr, int s){
	int minNum = 0;
	int temp = 0;
	for (int i = 0; i < s-1; i++)
	{
		minNum = i;
		for (int j = i+1; j <s; j++)
		{
			if (arr[j] < arr[minNum]){
				minNum = j;
				//cout << j;
				

			}
			//swapping
			temp = arr[minNum];
			arr[minNum] = arr[i];
			arr[i] = temp;
		}
		
	}
	
}

