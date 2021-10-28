#include <iostream>

#define SUMMER 1
#define SPRING 2
#define AUTUMN 4
#define WINTER 8

#define SEASON WINTER
int main() {

#if SEASON & SUMMER
        std::cout << "Summer";
#elif SEASON & SPRING
        std::cout << "Spring";
#elif SEASON & AUTUMN
        std::cout << "Autumn";
#elif SEASON & WINTER
        std::cout << "Winter";
#endif
    return 0;
}