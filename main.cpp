#include <iostream>
#include <random>

int main() {
    std::cout << "Hello, World!" << std::endl;
    // creating random numbers for c++ 11
    // https://stackoverflow.com/a/19666713/1478636
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> dist(1.0, 10.0);
    for (int i = 0; i < 10; i++){
        std::cout << "Here, have a rando: " << dist(mt) << " " << std::endl;
    }
    return 0;
}