#include <iostream>
#include "./summer.h"

int main() {
    std::cout << "Hello Compiler !!" << std::endl;
    std::cout << "addMe = " << addMe(10, 20) << std::endl;

#ifdef DEBUGKNNECT
    std::cout << "Wola debug = " << debugger() << std::endl;
#endif  // DEBUGKNNECT

    return 0;
}
