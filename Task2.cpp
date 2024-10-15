#include<iostream>
#include<string>
using namespace std;
template<typename I,typename A>
int linearSearch(I arr[], I k);
template<typename I, typename A>
int linearSearch(I *arr, I k){

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] == k){
			return i;
		}
	}

}
template<typename I, typename A>
void printSearchResult(I index, A k){
	cout << k << " is present at " << index << " position in the array "<<endl;
}



int main() {
	 //integer data 
	int intArray[5] = { 64, 25, 12, 22, 11 };
	int intKey = 22;
	int intIndex = linearSearch<int,int>(intArray, intKey);
	printSearchResult(intIndex, intKey);


	//float data
	float floatArray[4] = { 3.14, 2.71, 1.62, 0.57 };
	float floatKey = 1.62;
	int floatIndex = linearSearch<float,float>(floatArray, floatKey);
	printSearchResult(floatIndex, floatKey);


	// Test with a string array of size 4
	string stringArray[4] = { "apple", "orange", "banana", "grape" };
	string stringKey = "apple";
	int stringIndex;
	stringIndex = linearSearch<string, string>(stringArray, stringKey);
	printSearchResult<int,string>(stringIndex, stringKey);


	return 0;
}




