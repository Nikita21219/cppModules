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

/*
c && ./convert nan
c && ./convert asdfsadf
c && ./convert 42.0f
c && ./convert 42.5f
c && ./convert 42.ff
c && ./convert 42ff
c && ./convert 42f
c && ./convert 0
c && ./convert 32
c && ./convert -32
c && ./convert -4.2f
c && ./convert -4.2
*/
