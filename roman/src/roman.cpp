#include <roman/roman.h>
#include <stdexcept>
#include <sstream>

std::string arabic_to_roman(int arabic)
{
    if ((arabic > 0) and (arabic < 4000)) {
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
    } else {
        throw std::domain_error("");
    }
}