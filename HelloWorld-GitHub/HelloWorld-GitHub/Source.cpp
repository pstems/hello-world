#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int addition1(int a, int b);

class Merman
{
private:
	int age;
	string merName;

public:
	Merman(string mName, int mAge)
	{
		merName = mName;
		age = mAge;
	}

	void Mprint()
	{
		cout << setw(10) << "Name: " << merName << endl;
		cout << setw(10) << "Age: " << age << endl;
	}
};

int main()
{
	cout << "Hello World!" << endl;
	cout << "My first program." << endl;

	cout << addition1(4, 8) << endl;

	Merman Peterman("Peter",27);

	Peterman.Mprint();

	return 0;
}

int addition1(int a, int b)
{
	return a + b;
}



