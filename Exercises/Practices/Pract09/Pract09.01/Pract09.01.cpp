#include <iostream>

using namespace std;

bool isEven(int number) {
    int mask = 1;

    return !(number & mask);
}

unsigned int setBit(unsigned int n, unsigned int k) {
    // 1001
}

int main()
{
    cout << isEven(12) << endl;
    cout << isEven(13) << endl;
}
