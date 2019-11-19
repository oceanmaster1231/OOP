#include <iostream>
#include "bike.h"
#include "car.h"

int main() {
    car *pam= new car(86, 1231, "pam", true);
    std::cout << pam->get_class_name() << std::endl;
    std::cout << pam->get_car_name() << std::endl;
    std::cout << pam->get_wheel_number() << std::endl;
    std::cout << pam->get_max_speed() << std::endl;
    c1->set_max_speed(120);
    std::cout << pam->get_max_speed() << std::endl;
    std::cout << pam->get_has_name() << std::endl;

    bike *scott = new bike(12, 505, "scott", 123);
    std::cout << scott->get_class_name() << std::endl;
    std::cout << scott->get_bike_name() << std::endl;
    std::cout << scott->get_wheel_number() << std::endl;
    std::cout << scott->get_max_speed() << std::endl;
    b1->set_max_speed(90);
    std::cout << scott->get_max_speed() << std::endl;
    std::cout << scott->get_bike_number() << std::endl;
    std::cout << scott->get_has_name() << std::endl;

    return 0;
}