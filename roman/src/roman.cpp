#include <roman/roman.h>
#include <stdexcept>

std::string arabic_to_roman(int arabic)
{
    if (arabic > 0) {
        std::string roman("");
        for (int i = 0; i != arabic; ++i) {
            roman += "I";
        }
        return roman;
    } else {
        throw std::domain_error("");
    }
}