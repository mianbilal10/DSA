/* This program is writen is C++
** It measures time taked to calculate N Fabonaccis by Recursion approach
** It displays time at the end in seconds*/
#include <iostream>
#include <ctime>
using namespace std;

long double recursive_Fib(int n)
{
	if ((n == 1) || (n == 0))
		return n;
	return (recursive_Fib(n - 1) + recursive_Fib(n - 2));

}
//main starts
void main()
{
	cout << "Calculating time for fabonacci series" << endl;
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
			start = clock();//time count starts
			recursive_Fib(n);
			end = clock();//time count ends

			float time_taken = float(end - start) / CLOCKS_PER_SEC;
			cout << " " << time_taken <<"sec\n";

		}
	}
}//main ends
