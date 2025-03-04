#include <iostream>
//using bubble sort algorithm
void sort(int array[], int size); //function declaration

int main()
{
	int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5}; //creats an array
	int size = sizeof(array)/sizeof(array[0]); //calculate the size of an array

	sort(array, size); //invoking the function

	for(int element : array){ //iterate over an array using foreach loop
		std::cout << element << " ";
	}

    return 0;
}
void sort(int array[], int size){ //creating a sort function
	int temp; //temporary variable to swap out values
	for(int i = 0; i < size - 1; i++){ //nested for loop
		for(int j = 0; j < size - i - 1; j++){
			if(array[j] < array[j + 1]){
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}