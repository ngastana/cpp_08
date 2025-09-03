#include "Span.hpp"

// int main()
// {
//     Span sp = Span(5);
//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);
//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;
//     return 0;
// }

#include <iostream>
#include <vector>
#include "Span.hpp"

int main() {
    Span sp(10);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << "Después de addNumber:" << std::endl;
    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.longestSpan() << std::endl;

    std::vector<int> moreNumbers;
    moreNumbers.push_back(20);
    moreNumbers.push_back(25);
    moreNumbers.push_back(30);
    moreNumbers.push_back(35);
    moreNumbers.push_back(40);

    sp.addRange(moreNumbers.begin(), moreNumbers.end());

    std::cout << "Después de addRange:" << std::endl;
    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.longestSpan() << std::endl;

    return 0;
}
