#include "easyfind.h"

NotFoundEl::NotFoundEl() {}

const char *NotFoundEl::what() const throw() {return "Element not in container!";};
