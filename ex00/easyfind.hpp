#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include <iterator>

template <typename T>

//iterator: un puntero inteligente que sabe recorrer los elementos de un contenedor (vector, lista, mapa, etc.) sin que tú tengas que preocuparte de cómo está implementado internamente ese contenedor.
typename T::iterator easyfind(T &container, int occurrence){
    typename T::iterator it = std::find(container.begin(), container.end(), occurrence);
    if (it != container.end()){
        std::cout << "Occurrence found in: " << std::distance(container.begin(), it) << std::endl;
        return it;
    }
    else{
        std::cout << "No occurrence with the value " << occurrence << "." << std::endl;
        return container.end();
    }
}

#endif