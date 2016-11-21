def arabic_to_roman(arabic):
    if arabic == 1:
        return "I"
    else:
        raise RuntimeError("Arabic number must be positive and less than 4000")