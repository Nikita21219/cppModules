#include "easyfind.h"

template <typename T>
int easyfind(T &container, int num) {
    if (std::find(container.begin(), container.end(), num) == container.end())
        throw NotFoundEl();
    return num;
}
