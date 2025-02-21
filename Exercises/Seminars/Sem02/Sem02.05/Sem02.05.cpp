#include <iostream>

using namespace std;

int main()
{
	int h, m;
	cin >> h >> m;

	m += 15;

	if (m >= 60)
	{
		h++;
		m -= 60;
	}

	h %= 24;

	cout << (h < 10 ? "0" : "") << h;
	cout << ':';
	cout << (m < 10 ? "0" : "") << m;
	cout << endl;
}
