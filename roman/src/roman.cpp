#include <roman/roman.h>
#include <stdexcept>
#include <sstream>

namespace {

    bool is_convertible(int arabic) {
        return (arabic > 0) and (arabic < 4000);
    }

    std::string digit_to_roman(int digit,
                               std::string const & one_glyph,
                               std::string const & five_glyph,
                               std::string const & ten_glyph)
    {
        if (digit == 9) {
            return one_glyph + ten_glyph;
        }

        if (digit == 4) {
            return one_glyph + five_glyph;
        }

        std::ostringstream roman;

        if (digit >= 5) {
            roman << five_glyph;
            digit -= 5;
        }

        for (int i = 0; i != digit; ++i) {
            roman << one_glyph;
        }

        return roman.str();
    }

}

std::string arabic_to_roman(int arabic)
{
    if (is_convertible(arabic)) {
        return digit_to_roman(arabic / 10, "X", "L", "C") + digit_to_roman(arabic % 10, "I", "V", "X");
    } else {
        throw std::domain_error("Can only convert arabic numbers in the range [1, 3999]");
    }
}