def _digit_to_roman(digit, one_symbol, five_symbol, ten_symbol):
    if digit == 4:
        return one_symbol + five_symbol
    elif digit == 9:
        return one_symbol + ten_symbol
    else:
        if digit >= 5:
            roman = five_symbol
            digit -= 5
        else:
            roman = ""
        return roman + one_symbol * digit


def arabic_to_roman(arabic):
    if arabic > 0 and arabic < 4000:
        roman = _digit_to_roman(arabic / 10, "X", "L", "C")
        roman += _digit_to_roman(arabic % 10, "I", "V", "X")
        return roman
    else:
        raise RuntimeError("Arabic number must be positive and less than 4000")