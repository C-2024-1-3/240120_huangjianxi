#include "mytemperature.h"
using namespace std;
double celsius_to_fah(double cel) {
    return cel * 9 / 5 + 32;
}
double fahrenheit_to_cels(double fah) {
    return (fah - 32) * 5 / 9;
}