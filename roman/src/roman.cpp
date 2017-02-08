#include <roman/roman.h>
#include <stdexcept>
#include <sstream>

namespace {

    bool is_convertible(int arabic) {
        return (arabic > 0) and (arabic < 4000);
    }

    void digit_to_roman(std::ostream & roman,
                        int digit,
                        std::string const & one_glyph,
                        std::string const & five_glyph,
                        std::string const & ten_glyph)
    {
        if (digit == 9) {
            roman << one_glyph << ten_glyph;
            return;
        }

        if (digit == 4) {
            roman << one_glyph << five_glyph;
            return;
        }

        if (digit >= 5) {
            roman << five_glyph;
            digit -= 5;
        }

        for (int i = 0; i != digit; ++i) {
            roman << one_glyph;
        }
    }

}

std::string arabic_to_roman(int arabic)
{
    if (is_convertible(arabic)) {
        std::ostringstream roman;
        digit_to_roman(roman, arabic / 100, "C", "D", "M");
        digit_to_roman(roman, (arabic % 100) / 10, "X", "L", "C");
        digit_to_roman(roman, arabic % 10, "I", "V", "X");
        return roman.str();
    } else {
        throw std::domain_error("Can only convert arabic numbers in the range [1, 3999]");
    }
}