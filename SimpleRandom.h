//
// Created by Paul Baker on 1/15/18.
//

#ifndef PROCEDURAL_GENERATION_SIMPLERANDOM_H
#define PROCEDURAL_GENERATION_SIMPLERANDOM_H

#include <random>

class SimpleRandom {
public:
    SimpleRandom();
    SimpleRandom(uint seed);
    double nextDouble(double lower, double upper);
private:
    std::mt19937 mt;
};


#endif //PROCEDURAL_GENERATION_SIMPLERANDOM_H
