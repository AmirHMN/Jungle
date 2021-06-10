#include <iostream>
#include "Pet.h"

Pet::Pet() : Animal() {}

void Pet::fall() {
    Animal::fall();
    std::cout << " **** Pet Animal fell ****" << std::endl;
}
