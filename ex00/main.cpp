#include "easyfind.hpp"

int main () {
    int arr[] = {1, 2, 3, 4};
    std::vector<int> integers(arr, arr + 4);
    easyfind(integers, 1);
    easyfind(integers, 8);
    // std::vector<int> integers = {1, 2, 3, 4}; EN C++98 NO VALE
    // easyfind(integers, 8); 
    // return 0;

    int arr2[] = {10, 20, 30, 40};
    std::list<int> lst(arr2, arr2 + 4);
    easyfind(lst, 20);
    easyfind(lst, 2);
}
