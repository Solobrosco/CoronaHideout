// #include <olcPixelGameEngine.h>
#include <GlutApp.h>
#include <iostream>

class Verse{
protected: 
    int size;
    Verse();
public:
    Verse(int);   
    ~Verse();
};

int main(){
    std::cout << "Generation test" << std::endl;
    return 0;
}
