#include "iostream"

using std::cout; 
using std::endl;

constexpr int COUNT = 100;

int main()
{
    for (int i = 1; i < COUNT; ++i) {
        if (i % 3 == 0)
            cout << "Fizz\n";
        else if (i % 5 == 0)
            cout << "Buzz\n";
        else if (i % 15 == 0)
            cout << "FizzBuzz\n";
        else
            cout << i << "\n";
    }
    return EXIT_SUCCESS;
}
