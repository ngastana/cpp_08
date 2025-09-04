#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include <iterator>
#include <limits>
#include <stack>

template <typename T, typename Container=std::deque<T> > // si no se especifica nada, MutantStak funcionará igual que un std::stack, es decir, usando un deque internamente

class MutantStack: public std::stack<T,Container> { //hereda la clase estandar std::stack<T, Container>
	public:
		MutantStack(void){};
		MutantStack(const MutantStack &copy): std::stack<T, Container>(copy) {};
		MutantStack &operator=(const MutantStack &other) {std::stack<T, Container>::operator=(other); return *this;}
		~MutantStack(){};

		typedef typename Container::iterator iterator;
		iterator begin(void) {return (this->c.begin());};
		iterator end(void) {return (this->c.end());};

		typedef typename Container::iterator const_iterator;
		const_iterator begin(void) const {return (this->c.begin());};
		const_iterator end(void) const {return (this->c.end());};
};

#endif