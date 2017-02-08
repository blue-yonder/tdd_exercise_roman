#include <roman/roman.h>
#include <stdexcept>
#include <sstream>

namespace {

    bool is_convertible(int arabic) {
        return (arabic > 0) and (arabic < 4000);
    }

    std::string to_roman(int arabic) {
        if (arabic == 9) {
            return "IX";
        }

        if (arabic == 4) {
            return "IV";
        }

        std::ostringstream roman;

        if (arabic >= 5) {
            roman << "V";
            arabic -= 5;
        }

        for (int i = 0; i != arabic; ++i) {
            roman << "I";
        }

        return roman.str();
    }

}

std::string arabic_to_roman(int arabic)
{
    if (is_convertible(arabic)) {
        return to_roman(arabic);
    } else {
        throw std::domain_error("");
    }
}