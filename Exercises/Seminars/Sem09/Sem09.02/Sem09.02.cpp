#include <iostream>

using namespace std;

const char TERMINATE_SYMBOL = '\0';

bool isUpper(char ch)
{
    return ch >= 'A' && ch <= 'Z';
}

void toLower(char* text)
{
    while (*text != TERMINATE_SYMBOL)
    {
        if (isUpper(*text))
        {
            *text += 'a' - 'A';
        }

        text++;
    }
}

bool isLower(char ch)
{
    return ch >= 'a' && ch <= 'z';
}

void toUpper(char* text)
{
    while (*text != TERMINATE_SYMBOL)
    {
        if (isLower(*text))
        {
            *text += 'A' - 'a';
        }

        text++;
    }
}

int main()
{
    char text1[] = "HeLLo!";
    char text2[] = "HeLLo!";


    toUpper(text1);
    toLower(text2);

    cout << text1 << endl;
    cout << text2 << endl;
}