#include <iostream>

int longestOccurrences(const int* arr, int length)
{
    int longest = 1;

    int current = 1;

    for (int i = 1; i < length; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            current++;
        }
        else
        {
            if (current > longest)
            {
                longest = current;
                current = 1;
            }
        }
    }

    return longest;
}

int main()
{
    constexpr int length = 12;
    int arr[length] = { 3, 3, 2, 2, 2, 2, 5, 2, 2, 3, 3, 3 };

    std::cout << longestOccurrences(arr, length) << std::endl;
}