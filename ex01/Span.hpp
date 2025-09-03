#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include <iterator>
#include <limits>

class Span{
    private:
        Span();
        unsigned int _N;
        std::vector<int> _numbers;

    public:
        Span(unsigned int N);
        Span(const Span &copy);
        Span &operator=(const Span &other);
        ~Span();
        void addNumber(int n);
        unsigned int shortestSpan();
        unsigned int longestSpan();

        //Last but not least, it would be wonderful to fill your Span using a range of iterators. Making thousands of calls to addNumber() is so annoying. Implement a member function to add multiple numbers to your Span in a single call.
        template <typename it>
        void addRange(it first, it last) {
            if (_numbers.size() + std::distance(first, last) > _N)
                throw NoSpaceForMoreElements();
            _numbers.insert(_numbers.end(), first, last);
        }

    class NoSpaceForMoreElements: public std::exception
    {
        public:
            virtual const char *what() const throw()
            {
                return("No more space for the new element.");
            }
    };

    class LessThanOneNumberStores: public std::exception
    {
        public:
            virtual const char *what() const throw()
            {
                return("There are no numbers stored, or only one, no span can be found.");
            }
    };
};



#endif