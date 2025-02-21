#include <iostream>

bool isProgression(const int* arr, int length)
{
    int q;
    if (arr[1] % arr[0] != 0)
    {
        return false;
    }
    else
    {
        q = arr[1] / arr[0];
    }
    
    for (int i = 1; i < length; i++)
    {
        if (arr[i] != q * arr[i - 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    constexpr int length = 11;
    int arr[length] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024 };
    int arr2[length] = { 1, 2, 4, 8, 16, 32, 64, 128, 255, 512, 1024 };

    std::cout << isProgression(arr, length) << std::endl;
    std::cout << isProgression(arr2, length) << std::endl;
}