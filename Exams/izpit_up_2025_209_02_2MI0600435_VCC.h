// Nikolay Vasilev Stoyanov 
// 2MI0600435

#pragma once

// Task 1
int numberLength(long num)
{
	int count = 0;

	while (num != 0)
	{
		count++;
		num /= 10;
	}

	return count;
}

void addDigitsToArray(long num, int* arr, int length)
{
	int index = 0;
	while (num != 0)
	{
		arr[length - 1 - index] = num % 10;
		num /= 10;

		index++;
	}
}

bool checkNum(long num)
{
	int countOfDigits = numberLength(num);

	int* digits = new int[countOfDigits];

	addDigitsToArray(num, digits, countOfDigits);

	for (int i = 0; i < countOfDigits; i++)
	{
		int* digitsWithoutOne = new int[countOfDigits - 1];

		int index = 0;
		for (int j = 0; j < countOfDigits; j++)
		{
			if (j != i)
			{
				digitsWithoutOne[index] = digits[j];
				index++;
			}
		}

		bool isIncreasing = true;
		bool isDecreasing = true;

		for (int j = 0; j < countOfDigits - 1 - 1; j++)
		{
			if (digitsWithoutOne[j + 1] <= digitsWithoutOne[j])
			{
				isIncreasing = false;
			}
			else if (digitsWithoutOne[j + 1] >= digitsWithoutOne[j])
			{
				isDecreasing = false;
			}
		}
		delete[] digitsWithoutOne;

		if (isIncreasing || isDecreasing)
		{
			return true;
		}
	}

	delete[] digits;

	return false;
}

// Task 2
const char TERMINATE_SYMBOL = '\0';
const int MAX_SIZE = 128;
const int INPUT_SIZE = 3;

int getLength(const char* str)
{
	int length = 0;

	while (*str != TERMINATE_SYMBOL)
	{
		length++;

		str++;
	}

	return length;
}

bool containsNonNumericCharacter(const char* str)
{
	while (*str != TERMINATE_SYMBOL)
	{
		if (*str < '0' || *str > '9')
		{
			return true;
		}

		str++;
	}

	return false;
}

bool validateInput(const char* str)
{
	int length = getLength(str);

	if (length != 3)
	{
		return false;
	}

	if (containsNonNumericCharacter(str))
	{
		return false;
	}

	return true;
}

int customAtoi(char ch)
{
	return ch - '0';
}

int getPalyndromeOfThreeEqualDigits(int digit)
{
	if (digit == 0)
	{
		return 0;
	}
	else
	{
		return digit * 100 + digit * 10 + digit;
	}
}

int getPalyndromeOfTwoEqualDigits(int commonDigit, int distinctDigit)
{
	if (commonDigit == 0)
	{
		return distinctDigit * 1000 + distinctDigit;
	}
	else
	{
		return commonDigit * 100 + distinctDigit * 10 + commonDigit;
	}
}

int getPalyndromeOfThreeDistinctDigits(int min, int middle, int max)
{
	int front = min * 100 + middle * 10 + max;

	return front * 1000 + max * 100 + middle * 10 + min;
}

int findNumber(const char* str)
{
	if (!validateInput(str))
	{
		return -1;
	}

	int digit1 = customAtoi(str[0]);
	int digit2 = customAtoi(str[1]);
	int digit3 = customAtoi(str[2]);

	// Check if the three digits are equal
	if (digit1 == digit2 && digit1 == digit3)
	{
		return getPalyndromeOfThreeEqualDigits(digit1);
	}

	// Check if two digits are equal
	if (digit1 == digit2)
	{
		return getPalyndromeOfTwoEqualDigits(digit1, digit3);
	}
	if (digit2 == digit3)
	{
		return getPalyndromeOfTwoEqualDigits(digit2, digit1);
	}
	if (digit1 == digit3)
	{
		return getPalyndromeOfTwoEqualDigits(digit1, digit2);
	}

	// All digits are distinct
	int min, middle, max;
	if (digit1 < digit2 && digit1 < digit3)
	{
		min = digit1;
		if (digit2 < digit3)
		{
			middle = digit2;
			max = digit3;
		}
	}
	if (digit2 < digit1 && digit2 < digit3)
	{
		min = digit2;
		if (digit1 < digit3)
		{
			middle = digit1;
			max = digit3;
		}
	}
	if (digit3 < digit1 && digit3 < digit2)
	{
		min = digit3;
		if (digit1 < digit2)
		{
			middle = digit1;
			max = digit2;
		}
	}

	return getPalyndromeOfThreeDistinctDigits(min, middle, max);
}