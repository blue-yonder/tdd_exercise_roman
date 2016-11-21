def arabic_to_roman(arabic):
    if arabic > 0 and arabic < 4000:
        if arabic == 4:
            return "IV"
        elif arabic == 9:
            return "IX"
        else:
            if arabic >= 5:
                roman = "V"
                arabic -= 5
            else:
                roman = ""
            return roman + "I" * arabic
    else:
        raise RuntimeError("Arabic number must be positive and less than 4000")