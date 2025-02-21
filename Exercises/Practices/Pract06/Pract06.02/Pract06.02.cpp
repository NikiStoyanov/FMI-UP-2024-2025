#include <iostream>

bool isDescending(const int* arr, int length)
{
    for (int i = 1; i < length; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    constexpr int length = 7;
    int arr[length] = { 21, 18, 10, 7, 3, 3, 2 };
    int arr2[length] = { 21, 18, 10, 12, 3, 3, 2 };

    std::cout << isDescending(arr, length) << std::endl;
    std::cout << isDescending(arr2, length) << std::endl;
}