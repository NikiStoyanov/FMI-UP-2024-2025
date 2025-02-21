#include <iostream>

using namespace std;

int main()
{
	long seconds;
	cin >> seconds;

	// seconds / 60 = minutes
	
	int days = seconds / 60 / 60 / 24;

	seconds -= days * 24 * 60 * 60;

	int hours = seconds / 60 / 60;

	seconds -= hours * 60 * 60;

	int minutes = seconds / 60;

	seconds -= minutes * 60;

	cout << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds" << endl;

	return 0;
}
