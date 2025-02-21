#include <iostream>

using namespace std;

const char TERMINATE_SYMBOL = '\0';

bool isUpper(char ch)
{
    return ch >= 'A' && ch <= 'Z';
}

bool isLower(char ch)
{
    return ch >= 'a' && ch <= 'z';
}

bool isLetter(char ch)
{
    return isLower(ch) || isUpper(ch);
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

int countOfWords(char* text)
{
    toLower(text);

    int count = 0;
    bool hasCheckStarted = false;

    while (*text != TERMINATE_SYMBOL)
    {
        if (isLetter(*text))
        {
            hasCheckStarted = true;
        }
        else if (hasCheckStarted)
        {
            hasCheckStarted = false;
            count++;
        }
        
        text++;
    }

    return count;
}

int main()
{
    char text[] = "Me? Why always me?";

    cout << countOfWords(text) << endl;
}