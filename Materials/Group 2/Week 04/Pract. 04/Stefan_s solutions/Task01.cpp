#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    swap(a, b);
    cout << "a: " << a << endl << "b: " << b;
}
