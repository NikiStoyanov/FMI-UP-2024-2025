#include <iostream>

using namespace std;

void printChar(char ch, int times) {
	for (size_t i = 0; i < times; i++) {
		cout << ch;
	}
}

void printRectangle(int N, int M, char ch) {
	const int CONSOLE_MAX_ROWS = 25;
	const int CONSOLE_MAX_COLS = 80;

	printChar('\n', (CONSOLE_MAX_ROWS - M) / 2);
	for (size_t i = 0; i < M; i++) {
		printChar(' ', (CONSOLE_MAX_COLS - N) / 2);
		printChar(ch, N);
		cout << endl;
	}
	printChar('\n', (CONSOLE_MAX_ROWS - M) / 2);
}

int main() {
	printRectangle(20, 10, '$');

	return 0; 
}
