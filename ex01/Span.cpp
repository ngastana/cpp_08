#include "Span.hpp"

Span::Span(unsigned int N): _N(N){
    return;
}

Span::~Span(){
}

Span::Span(const Span &other){
    *this = other;
    return;
}

Span& Span::operator=(const Span& other) {
    this->_N = other._N;
    return (*this);
}

void Span::addNumber(int n) {
    if (_numbers.size() >= _N)
        throw NoSpaceForMoreElements();
    _numbers.push_back(n);
}

unsigned int Span::longestSpan() {
    if (_numbers.size() < 2)
        throw LessThanOneNumberStores();

    int maxVal = *std::max_element(_numbers.begin(), _numbers.end());
    int minVal = *std::min_element(_numbers.begin(), _numbers.end());
    return (maxVal - minVal);
}

unsigned int Span::shortestSpan() {
    if (_numbers.size() < 2)
        throw LessThanOneNumberStores();

    std::vector<int> sorted(_numbers);
    std::sort(sorted.begin(), sorted.end()); //de menor a mayor orden ascendente

    int minSpan = 2147483647;
    //int minSpan = std::numeric_limits<int>::max();
    for (size_t i = 0; i < sorted.size() - 1; ++i) {
        int diff = sorted[i+1] - sorted[i];
        if (diff < minSpan)
            minSpan = diff;
    }
    return minSpan;
}