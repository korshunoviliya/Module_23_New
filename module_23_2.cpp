#include <iostream>

#define MAX_PASSANGERS 20

#define PREDICAT(passengers) (passengers > MAX_PASSANGERS) ? (true):(false)

#define SUM(arr, sum) \
    for(int i = 0; i < sizeof arr/sizeof (int); i++){ \
    sum += arr[i];}\
    std::cout << "Total passengers: " << sum << std::endl;

#define CROWDED_WAGON(arr) \
    for(int i = 0; i < sizeof arr/sizeof (int); i++)\
    if(PREDICAT(arr[i])) std::cout << "There are " << arr[i] - 20 << \
               " more people in the " << i + 1 << " wagon" << std::endl;

#define EMPTY_WAGON(arr) \
    for(int i = 0; i < sizeof arr/sizeof (int); i++)\
    if(!PREDICAT(arr[i])) std::cout  << 20 - train[i] << \
              " free seats in the " << i + 1 << " wagon" << std::endl;

#define INPUT(arr) \
    for(int i=0; i<sizeof(arr)/sizeof(int); ++i){ \
    std::cout << "Enter quantity of passenger in the car " << i+1 << std::endl;\
    std::cin>>arr[i];\
}

int main() {
    int train[3] = {};
    int sum = 0;
    INPUT(train);
    CROWDED_WAGON(train);
    EMPTY_WAGON(train);
    SUM(train, sum);

    return 0;
}
