#include <iostream>

double average(const int* arr, int length)
{
    double sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }

    return sum / length;
}

int main()
{
    constexpr int length = 4;
    int arr[length] = { 5, 7, 4, 9 };

    double avrg = average(arr, length);
    std::cout << avrg;
}