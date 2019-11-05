#include<iostream>
#include<string>
#include<algorithm>
#include<cstdlib>
#include<ctime>
int rand();
using namespace std;

void bubbleSort(int arr[], int n){
	clock_t start = clock();
	for (int i = 0; i < n; i++){
		for (int j = n - 1; j > i; --j){
			if (arr[j] < arr[j - 1])
				swap(arr[j], arr[j - 1]);
		}
	}
	double total = double(clock() - start) / CLOCKS_PER_SEC;
	cout << "Time taken By Bubble Sorting is:" << total << endl;
}

void selectionSort(int arr[], int n){
	clock_t start = clock();
	for (int i = 0, j, least; i < n - 1; i++) {
		for (j = i + 1, least = i; j < n; j++)
			if (arr[j] < arr[least])
				least = j;
		swap(arr[least], arr[i]);
	}

	double total = double(clock() - start) / CLOCKS_PER_SEC;
	cout << "Time taken By Selection Sorting is:" << total << endl;
}

void insertionSort(int arr[], int n){
	clock_t start = clock();
	for (int i = 1, j; i < n; i++) {
		int tmp = arr[i];
		for (j = i; (j > 0 && tmp < arr[j - 1]); j--)
			arr[j] = arr[j - 1];
		arr[j] = tmp;
	}

	double total = double(clock() - start) / CLOCKS_PER_SEC;
	cout << "Time taken By Insertion Sorting is:" << total << endl;
}
//swap function
void swap(int*a, int*b){
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;

}

int main(){

	int *arr1, *arr2, *arr3;
	int size;
	srand(time(0));

	cout << "Time taken by Average case Scenario\n";
	cout << "___________________________________\n";
	do
	{
		cout << "Enter array size(-1 to exit):  ";
		cin >> size;
		cout << "\n";
		//memory alocastion
		arr1 = new int[size];
		arr2 = new int[size];
		arr3 = new int[size];

		for (int i = 0; i < size; i++)
		{
			arr1[i] = rand() % 100;
			arr2[i] = arr1[i];
			arr3[i] = arr1[i];
		}
		//function calls
		bubbleSort(arr1, size);
		insertionSort(arr2, size);
		selectionSort(arr3, size);
		cout << "\n\n";

	} while (size != -1);


	return 1;
}
