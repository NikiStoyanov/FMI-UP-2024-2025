#include <iostream>

using namespace std;

struct Point {
	int x;
	int y;
};

struct Line {
	Point p1;
	Point p2;
};

bool isParallelToOx(const Line& l1) {
	return l1.p1.y == l1.p2.y;
}

bool isParallelToOy(const Line& l1) {
	return l1.p1.x == l1.p2.x;
}

int myMax(int a, int b) {
	return a >= b ? a : b;
}

int myMin(int a, int b) {
	return a <= b ? a : b;
}

int commonLength(const Line& l1, const Line& l2) {
	int length = 0;

	if (isParallelToOx(l1) && isParallelToOx(l2) && l1.p1.y == l2.p1.y) {
		length = myMin(myMax(l1.p1.x, l1.p2.x), myMax(l2.p1.x, l2.p2.x)) - myMax(myMin(l1.p1.x,l1.p2.x), myMin(l2.p1.x, l2.p2.x));
	}

	if (isParallelToOy(l1) && isParallelToOy(l2) && l1.p1.x == l2.p1.x) {
		length = myMin(myMax(l1.p1.y, l1.p2.y), myMax(l2.p1.y, l2.p2.y)) - myMax(myMin(l1.p1.y, l1.p2.y), myMin(l2.p1.y, l2.p2.y));
	}

	return length >= 0 ? length : -1;
}

int main() {
	Line l1{ 6,4,3,4 };
	Line l2{ 4,4,10,4 };

	cout << commonLength(l1, l2);
	return 0; 
}
