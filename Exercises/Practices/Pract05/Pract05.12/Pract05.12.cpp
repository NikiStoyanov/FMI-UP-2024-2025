#include <iostream>

using namespace std;

void addMinutes(int& h, int& m, int minutesToAdd)
{
	m += minutesToAdd;
	// 10 245
	if (m >= 60)
	{
		int addedHours = m / 60;
		h += addedHours;
		m -= addedHours * 60;
	}
}

void getLastShow(int n, unsigned int& maxHours, unsigned int& maxMins)
{

}

int main()
{
	int n;
	cin >> n;

	int maxHours = 0, maxMins = 0;

	for (int i = 0; i < n; i++)
	{
		int hours, minutes, minutesToAdd;
		cin >> hours >> minutes >> minutesToAdd;

		addMinutes(hours, minutes, minutesToAdd);

		if (hours >= maxHours && minutes >= maxMins)
		{
			maxHours = hours;
			maxMins = minutes;
		}
	}

	cout << maxHours << " " << maxMins;
}