#include <iostream>
using namespace std;

int main()
{
    int sum = 0, value = 0;
   cout << "some numbers: (end by ctrl+z)" << endl;
    for (; cin >> value; )
        sum += value;
    cout << "the inclusive is: " << sum << endl;
    system("pause");
    return 0;
}
