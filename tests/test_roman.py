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

def test_negative_number_raises():
    with pytest.raises(RuntimeError):
        arabic_to_roman(-1)

def test_zero_raises():
    with pytest.raises(RuntimeError):
        arabic_to_roman(0)

def test_four_thousand_raises():
    with pytest.raises(RuntimeError):
        arabic_to_roman(4000)

def test_one():
    assert "I" == arabic_to_roman(1)

def test_two():
    assert "II" == arabic_to_roman(2)