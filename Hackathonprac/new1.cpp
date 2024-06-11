#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::cout << "Printing string character by character:\n";
    for (char c : input) {
        std::cout << c << " ";
    }
    std::cout << std::endl;

    return 0;
}