#include "convert.h"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Wrong number of arguments" << std::endl;
        return 1;
    }
    Convert convert = Convert(argv[1]);
    convert.printValues();
    return 0;
}
