#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//create some data
	short int a = -6730;
	float b = 68.123;
	char c = 'J';

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;//display data to console (i.e. as formatted chars)

	cout << endl << endl;

	ofstream myfile{ "abc.txt" };

	if (myfile)
	{


		myfile << a << " " << b << " " << c << " " << endl;

	}
	else

		cout << "error opening abc.txt";
	myfile.close();


	return 0;

	system("pause");
}
