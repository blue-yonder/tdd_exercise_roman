#include <roman/roman.h>
#include <stdexcept>

std::string arabic_to_roman(int arabic)
{
    if (arabic == 1) {
        return "I";
    } if (arabic == 2) {
        return "II";
    } if (arabic == 3) {
        return "III";
    } else {
        throw std::domain_error("");
    }
}