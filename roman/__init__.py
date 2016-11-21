def arabic_to_roman(arabic):
    if arabic > 0 and arabic < 4000:
        return "I" * arabic
    else:
        raise RuntimeError("Arabic number must be positive and less than 4000")