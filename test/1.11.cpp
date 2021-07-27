#include <iostream>
 
using namespace std;
 
int main()
{
	int a = 0;
	int b = 0;
 
	cout << "Enter two numbers: " << endl;
 
	cin >> a >> b;
 
	while (a >= b)
	{
		cout <<b++ << endl;
	}
 
	while (a <= b)
	{
		cout << a++ << endl;
	}
 
    system("pause");
	return 0;
 
}