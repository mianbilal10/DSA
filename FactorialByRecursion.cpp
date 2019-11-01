#include <iostream>
#include <ctime>

using namespace std;

long double recursive_factorial(int n)
{

	if (n <= 0)
		return 1;
	else
		return n * recursive_factorial(n - 1);
}
void main()
{
	cout << "Calculating time for factorial by Recursion" << endl;
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
			cout << "\nTime Taken: " << endl;

			clock_t start, end;
			start = clock();

			recursive_factorial(n);

			end = clock();
			double time_taken = double(end - start) / CLOCKS_PER_SEC;
			cout << " " << time_taken << "sec";


		}

	}

}
