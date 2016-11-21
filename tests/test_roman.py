from roman import arabic_to_roman

import pytest

"""
Use this file to test-drive the implementation of an `arabic_to_roman()`
function. Repeat the following steps until you have solved the task:

1. Write a _minimal_ failing test.
2. Pass the test with a _minimal_ change to your production code.
3. Improve both tests and production code with refactorings.

Heed the word "minimal". You can fail a test with a trivial thing such
as importing a function that is not yet defined. A trivial fix to your
production code could be to create a simple stub that does nothing at all.

Execute the tests with `python setup.py test`. This test file will fail
when it is freshly checked out.
"""

def test_inconvertible_numbers():
    inconvertibles = [-1, 0, 4000]
    for number in inconvertibles:
        with pytest.raises(RuntimeError):
            arabic_to_roman(-1)

def test_ones():
    ones = {1: "I",
            2: "II",
            3: "III",
            4: "IV",
            5: "V",
            6: "VI"}
    for arabic, expected_roman in ones.items():
        assert arabic_to_roman(arabic) == expected_roman
