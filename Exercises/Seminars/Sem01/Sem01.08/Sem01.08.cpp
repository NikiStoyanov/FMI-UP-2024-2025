#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    bool marker = a < b;

    marker && (cout << b << endl) || (cout << a << endl);
}
