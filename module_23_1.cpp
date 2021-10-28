#include <iostream>

#define DAY1 "Monday"
#define DAY2 "Tuesday"
#define DAY3 "Wednesday"
#define DAY4 "Thursday"
#define DAY5 "Friday"
#define DAY6 "Saturday"
#define DAY7 "Sunday"

#define WEEK(numberDay) DAY ## numberDay

int main() {
    int numberDay{7};
    std::cout << "Input the number of number: ";
    std::cin >> numberDay;

    if (numberDay == 1) std::cout << WEEK(1) << std::endl;
    else if (numberDay == 2) std::cout << WEEK(2) << std::endl;
    else if (numberDay == 3) std::cout << WEEK(3) << std::endl;
    else if (numberDay == 4) std::cout << WEEK(4) << std::endl;
    else if (numberDay == 5) std::cout << WEEK(5) << std::endl;
    else if (numberDay == 6) std::cout << WEEK(6) << std::endl;
    else if (numberDay == 7) std::cout << WEEK(7) << std::endl;
    else std::cerr << "Wrong input!!!\n";

    return 0;
}
