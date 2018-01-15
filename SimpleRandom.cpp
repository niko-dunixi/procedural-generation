//
// Created by Paul Baker on 1/15/18.
//

#include "SimpleRandom.h"

SimpleRandom::SimpleRandom() {
    std::random_device rd;
    this->mt = std::mt19937(rd());
}

SimpleRandom::SimpleRandom(uint seed) {
    this->mt = std::mt19937(seed);
}

double SimpleRandom::nextDouble(double lower, double upper) {
    std::uniform_real_distribution<double> dist(lower, upper);
    double next = dist(this->mt);
    return next;
}
