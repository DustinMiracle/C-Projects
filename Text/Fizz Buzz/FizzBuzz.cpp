// Fizz Buzz in c++ using recursion

#include <iostream>


// Function prototype
void fizzBuzz(int start, int end);

int main()
{
	fizzBuzz(1, 100);

	return 0;
}

void fizzBuzz(int start, int end)
{
	if (start % 15 == 0) 
		{ std::cout << "FizzBuzz\n"; }
	else if (start % 5 == 0) 
		{ std::cout << "Buzz\n"; }
	else if (start % 3 == 0) 
		{ std::cout << "Fizz\n"; }
	else 
		{ std::cout << start << "\n"; }

	if (start < end)
	{
		fizzBuzz(start + 1, end);
	}

}