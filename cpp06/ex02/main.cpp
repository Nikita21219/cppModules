#include "dynamiccast.h"

Base *generate(void) {
    int class_choice = rand() % 3;
    if (class_choice == 0)
        return new A;
    else if (class_choice == 1)
        return new B;
    else if (class_choice == 2)
        return new C;
    return NULL;
}

void identify(Base *p) {
    if (dynamic_cast<A*>(p))
        std::cout << "Type A!" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Type B!" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Type C!" << std::endl;
}

void identify(Base &p) {
    try {
        A &ref = dynamic_cast<A &>(p);
        (void) ref;
        std::cout << "Type A!" << std::endl;
    } catch (std::exception &e) {}
    try {
        B &ref = dynamic_cast<B &>(p);
        (void) ref;
        std::cout << "Type B!" << std::endl;
    } catch (std::exception &e) {}
    try {
        C &ref = dynamic_cast<C &>(p);
        (void) ref;
        std::cout << "Type C!" << std::endl;
    } catch (std::exception &e) {}
}

int main() {
    srand(time(NULL));

    Base *pb = generate();
    Base &rb = *pb;
    identify(pb);
    identify(rb);
    return 0;
}
