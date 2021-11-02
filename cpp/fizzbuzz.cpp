// #include "iostream"

// using std::cout; 
// using std::endl;

// constexpr int COUNT = 100;

// int main()
// {
//     for (int i = 1; i < COUNT; ++i) {
//         if (i % 3 == 0)
//             cout << "Fizz\n";
//         else if (i % 5 == 0)
//             cout << "Buzz\n";
//         else if (i % 15 == 0)
//             cout << "FizzBuzz\n";
//         else
//             cout << i << "\n";
//     }
//     return EXIT_SUCCESS;
// }

#include <iostream>
#include <string>
#include <map>

using std::cout; 
using std::endl;
using std::string; 
using std::cin;
using std::map;

constexpr int COUNT = 100;

class FizzBuzz {
    map<int, string> table;
public:
    explicit FizzBuzz(map<int, string> &init):
            table(std::move(init)) {}

    void checkFizzBuzz() {
        for (int i = 1; i <= COUNT; ++i) {
            for (const auto &item : table) {
                i % item.first == 0 ?
                cout << item.second << ", " :
                cout << i << ", ";
                break;
            }
        }
    }
};

int main(){
    map<int, string> init = {{3, "Fizz"},
                            {5, "Buzz"},
                            {15, "FizzBuzz"}};

    FizzBuzz fii(init);
    fii.checkFizzBuzz();

    return EXIT_SUCCESS;
}

