// Implementation of basic sorting algorithm
//Including: bubbleSort, selectionSort, insertionSort

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

// Implemetation of bubbleSort Algorithm
void bubbleSort(int arr[], int n){

	for (int i = n - 1; i >= 1; i--){
		for (int j = 0; j <= i - 1; j++){
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
	cout << "Sorted by Bubble sort: ";
	for (int m = 0; m < 8; m++)
		cout << arr[m] << "  ";
	cout << endl << endl;
}
//Implemetation of selectionSort algorithm
void selectionSort(int arr[], int n){
	for (int i = n - 1; i <= 0; i--){
		int max = i;
		for (int j = 0; j <= i - 1; j++){
			if (arr[max] < arr[j]){
				max = j;
			}
		}
		swap(arr[i], arr[max]);
	}
	cout << "Sorted by Selection sort: ";
	for (int m = 0; m < 8; m++)
		cout << arr[m] << "  ";
	cout << endl << endl;
}
//Implemetation of insertionSort algorithm
void insertionSort(int arr[], int n){
	for (int i = 1; i < n; i++){
		int key = arr[i], j = i - 1;
		while (j >= 0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
	cout << "Sorted by Insertion sort: ";
	for (int m = 0; m < 8; m++)
		cout << arr[m] << "  ";
	cout << endl << endl;
}
// method for swaping two values through pointer variables
void swap(int*a, int*b){
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;

}
//main starts
int main(){

//2D array for sorting
	int a[3][8] = { { 3, 5, 7, 8, 1, 45, 13, 54 }, { 3, 5, 7, 8, 1, 45, 13, 54 }, { 3, 5, 7, 8, 1, 45, 13, 54 } };

//call to functions
	bubbleSort(a[0], 8);
	selectionSort(a[1], 8);
	insertionSort(a[2], 8);
	return 1;
}//main ends
