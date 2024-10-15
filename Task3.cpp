#include<iostream>
#include<string>
using namespace std;
template<typename I, typename A>
int binarySearch(I array[], A x, int low, int high);

template<typename I, typename A>
int binarySearch(I array[], A x, int low, int high){

	while (low <= high) {
		int mid = low + (high - low) / 2;

		if (x == array[mid])
			return mid;

		if (x > array[mid])
			low = mid + 1;

		else
			high = mid - 1;
	}

	return -1;

	

}

template<typename I, typename A>
void printSearchResult(I index, A k);


template<typename I, typename A>
void printSearchResult(I index, A k){
	cout << k << " is present at " << index << " position in the array " << endl;
}

int main() {
		// Test with an integer array (sorted) of size 5
		int intArray[5] = { 11, 12, 22, 25, 64 };
		int intKey = 22;
		int n = sizeof(intArray) / sizeof(intArray[0]);
		int intIndex = binarySearch<int,int>(intArray, intKey, 0, n - 1);
		printSearchResult<int,int>(intIndex, intKey);

		// Test with a float array (sorted) of size 4
		float floatArray[4] = { 0.57, 1.62, 2.71, 3.14 };
		float floatKey = 2.71;
		int floatIndex = binarySearch<float,float>(floatArray, floatKey,0,n-1);
		printSearchResult<float,float>(floatIndex, floatKey);

		// Test with a string array (sorted) of size 4
		string stringArray[4] = { "apple", "banana", "grape", "orange" };
		string stringKey = "grape";
		int stringIndex = binarySearch<string,string>(stringArray, stringKey,0,n-1);
		printSearchResult(stringIndex, stringKey);

		return 0;
	}



