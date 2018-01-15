#include <iostream>
#include <random>
#include "SimpleRandom.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    // creating random numbers for c++ 11
    // https://stackoverflow.com/a/19666713/1478636
    SimpleRandom simpleRandom;
    for (int i = 0; i < 10; i++){
        std::cout << "Here, have a rando: " << simpleRandom.nextDouble(1.0, 10.0) << std::endl;
    }
    return 0;
}