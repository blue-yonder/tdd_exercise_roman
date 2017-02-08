#include <roman/roman.h>
#include <stdexcept>

std::string arabic_to_roman(int arabic)
{
    if (arabic == 1) {
        return "I";
    } else {
        throw std::domain_error("");
    }
}