/* This program is writen is C++
** It measures time taked to calculate N Factorial by Iteration approach
** It displays time at the end in seconds*/
#include <iostream>
#include <ctime>

using namespace std;

void iterative_factorial(int n)
{
	long double factorial = 1;
	for (int i = 1; i <= n; i++)
	{
		factorial = factorial * i;
	}

}
//main starts
void main()
{
	cout << "Calculating time for factorial" << endl;
	cout << "_____________________________________\n" << endl;

	int n = 0;//number
	while (1){

		cout << "\nEnter the value of N(-1 to exit): " << endl;
		cin >> n;
		if (n == -1)
		{
			exit(1);
		}
		else
		{
			cout << "\nTime Taken: "<<endl;

			clock_t start, end;
			start = clock();//time count starts
			iterative_factorial(n);
			end = clock();//time count ends
			double time_taken = double(end - start) / CLOCKS_PER_SEC;
			cout << " " << time_taken<<"sec\n";

		}
	}
}//main ends
