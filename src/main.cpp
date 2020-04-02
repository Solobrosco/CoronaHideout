#include <stdio.h>
#include <iostream>
#include <vector>

int main(){
    std::cout << "Hello World" << std::endl;
    std::vector<int> v = {2,3,4,5,6,7};
    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}