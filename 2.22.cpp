#include <iostream>
using namespace std;
int main()
{
	int n = 99;
	int* fun = new int[n];
	int i=2;
	int Num = 0;

	for (i = 2; i < 20; i++)
	{
		fun[0] = { 1 };
		fun[1] = { 1 };
		fun[i] = fun[i - 1] + fun[i - 2];
	}
	for (i = 0; i < 20; i++)
	{
		Num +=fun[i];
		cout << fun[i] <<"  ";
	}

	cout <<endl<< Num << endl;

	delete[] fun;
	
}
