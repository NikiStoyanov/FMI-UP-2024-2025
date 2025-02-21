#include <iostream>

using namespace std;

int main()
{
    char c;
    cin >> c;

    bool isLower = c >= 'a' && c <= 'z';

    isLower && (c = (c - 'a') + 'A') || (c = (c - 'A') + 'a');

    cout << c << endl;

	return 0;
}
