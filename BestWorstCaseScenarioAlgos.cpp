//Implemetation of basic algorithms
//And calculating their time complexity in Best as well as worst case Scenario
#include<iostream>
#include<string>
#include<algorithm>
#include<cstdlib>
#include<ctime>
#include<functional>
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

	int *arr;
	int size;
	srand(time(0));


	do
	{
		cout << "Enter array size(-1 to exit):  ";
		cin >> size;
		cout << "\n";
		//memory alocastion
		arr = new int[size];

		for (int i = 0; i < size; i++)
		{
			arr[i] = rand() % 100;
		}
		cout << "Time taken by Best case Scenario(n=" << size << ")\n";
		cout << "___________________________________\n";

		//function calls
		sort(arr, arr + size);//ascending order sorted
		bubbleSort(arr, size);
		insertionSort(arr, size);
		selectionSort(arr, size);
		cout << "\n\n";

		cout << "Time taken by Worst case Scenario(n=" << size << ")\n";
		cout << "___________________________________\n";
		//function calls
		sort(arr, arr + size, greater<int>());//descending order
		bubbleSort(arr, size);
		insertionSort(arr, size);
		selectionSort(arr, size);
		cout << "\n\n";

	} while (size != -1);


	return 1;
}
