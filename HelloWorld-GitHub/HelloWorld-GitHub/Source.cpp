#include <iostream>

using namespace std;

int addition1(int a, int b);

int main()
{
	cout << "Hello World!" << endl;
	cout << "My first program." << endl;

	cout << addition1(4, 8) << endl;

	return 0;
}

int addition1(int a, int b)
{
	return a + b;
}