#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

#define SEED 420
#define RANGE 100
#define MY_VECTOR_SIZE 100

int main(){
    clock_t time;

    std::srand(SEED);
    
    std::cout << "Hello World" << std::endl;
    
    time = std::clock();
    std::vector<int> v = {};
    for(int i = 0; i < MY_VECTOR_SIZE; i++){
        v.push_back(std::rand() % RANGE);
        std::cout << v[i] << "\t";
    }
    std::cout << std::endl;
    time = std::clock() - time;
    std::cout << "Processing time: " << ((float) time)/CLOCKS_PER_SEC << std::endl;

    // A container for sampling
    std::vector<int> container;
    // Inputing numbers into container
    time = std::clock();
    for(int i = 1; i < MY_VECTOR_SIZE + 1; i++){
        container.push_back(i);
        std::cout << container[i-1] << "\t";
    }
    std::cout << std::endl;
    time = std::clock() - time;
    std::cout << "Processing time: " << ((float) time)/CLOCKS_PER_SEC << std::endl;
    
    // time = std::clock();
    // std::shuffle(container.begin(), container.end(), container);

    return 0;
}