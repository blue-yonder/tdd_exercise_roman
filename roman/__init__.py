def arabic_to_roman(arabic):
    if arabic > 0 and arabic < 4000:
        if arabic == 4:
            return "IV"
        elif arabic == 5:
            return "V"
        elif arabic == 6:
            return "VI"
        else:
            return "I" * arabic
    else:
        raise RuntimeError("Arabic number must be positive and less than 4000")