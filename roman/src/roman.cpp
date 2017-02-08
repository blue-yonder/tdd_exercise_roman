#include <roman/roman.h>
#include <stdexcept>

std::string arabic_to_roman(int arabic)
{
    if ((arabic > 0) and (arabic < 4000)) {
        if (arabic == 4) {
            return "IV";
        } if (arabic == 5) {
            return "V";
        } if (arabic == 6) {
            return "VI";
        } else {
            std::string roman("");
            for (int i = 0; i != arabic; ++i) {
                roman += "I";
            }
            return roman;
        }
    } else {
        throw std::domain_error("");
    }
}