#include "easyfind.hpp"

int main ()
{
    int* integers[3];
    *integers[0] = 1;
    *integers[1] = 1;
    *integers[2] = 1;
    *integers[3] = 1;
    easyfind (integers, 8);
    return 0;
}