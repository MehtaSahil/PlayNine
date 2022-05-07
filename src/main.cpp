#include <iostream>
#include "Card.cpp"

int main() {
    std::cout << "hello, world!" << std::endl;

    Card c(5);
    std::cout << c.get_value() << std::endl;

    return 0;
}