#include "serialize.h"

struct Data {
    int i;
    double d;
};

Data* deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>(raw);
}

uintptr_t serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

int main() {
    Data dataPtr;
    dataPtr.d = 4.2;
    dataPtr.i = 42;
    Data *dataSerPtr = deserialize(serialize(&dataPtr));
    if (&dataPtr == dataSerPtr && dataPtr.d == dataSerPtr->d && dataPtr.i == dataSerPtr->i)
        std::cout << "It is equal" << std::endl;
    else
        std::cout << "It is not equal" << std::endl;
    return 0;
}
