#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <string>

template <typename T>

int easyfind(T &type, int occurrence){
    try {
        (void)static_cast<int *>(type);
        std::cout << "BIEN" << std::endl;
    }
    catch (const std::exception&){return 0;}

    for (int i = 0; i < type.length(); i++)
    {
        if (occurrence == type[i]){
            std::cout << "Hay una concurrencia en el punto " << i << std::endl;
            return (i);
        }
    }
    std::cout << "No hay ninguna ocurrencia ya lo siento" << std::endl;
    return (0);
}

#endif