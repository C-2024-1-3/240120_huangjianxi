#include<iostream>
#include <iomanip>
#include"mytemperature.h"
using namespace std;
int main() {
    std::cout << std::fixed << std::setprecision(2);  

    std::cout << "Celsius    Fahrenheit   |   Fahrenheit       Celsius\n";
    for (double celsius = 40.0; celsius >= 31.0; celsius -= 1.0) {
        double fahrenheit = celsius_to_fah(celsius);
        std::cout << std::setw(8) << celsius << std::setw(12) << fahrenheit << " |   ";

        double another_fahrenheit = 120.0 - (40.0 - celsius) * 10.0;
        double another_celsius = fahrenheit_to_cels(another_fahrenheit);
        std::cout << std::setw(8) << another_fahrenheit << std::setw(12) << another_celsius << "\n";
    }
    return 0;
}