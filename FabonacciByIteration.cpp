#include <iostream>
#include <ctime>
using namespace std;

void iterative_Fib(int n)
{
	long double fibonaaci = 0, temp = 1, temp2 = 0;

	for (int i = 1; i <= n; i++)
	{
		fibonaaci = temp + temp2;
		temp2 = temp;
		temp = fibonaaci;
	}

}


void main()
{
	cout << "Calculating time for fabonacci series by iteration" << endl;
	cout << "_____________________________________\n" << endl;

	int n = 0;//number of fabonaccis
	while (1){

		cout << "\nEnter the value of N(-1 to exit): " << endl;
		cin >> n;
		if (n == -1)
		{
			exit(1);
		}
		else
		{
			cout << "\nTime Taken: " << endl;
			clock_t start, end;
			start = clock();
			iterative_Fib(n);
			end = clock();
			float time_taken = (float)(end - start) / CLOCKS_PER_SEC;
			cout << "   " << time_taken<<" sec";

		}

	}


}
