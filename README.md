# Roman numerals TDD kata

Test-driven development is a software development process that
basically puts writing a failing unit test before modifying your
production code. This repository provides scaffolds for various
programming languages for hassle-free first steps in the world
of TDD by solving a simple task.

# The task

Your task is the following: Practicing test-driven development,
implement a function that converts Arabic numbers (1-3999) to
Roman numerals.

If your memory of Roman numerals is a little foggy, you can head over
to [wikipedia](https://en.wikipedia.org/wiki/Roman_numerals)
or refer to this conveniently placed table:

| Ones     |   | Tens      |   | Hundreds   |   | Thousands  |
|----------|---|-----------|---|------------|---|------------|
| 1 = I    |   | 10 = X    |   | 100 = C    |   | 1000 = M   |
| 2 = II   |   | 20 = XX   |   | 200 = CC   |   | 2000 = MM  |
| 3 = III  |   | 30 = XXX  |   | 300 = CCC  |   | 3000 = MMM |
| 4 = IV   |   | 40 = XL   |   | 400 = CD   |   |            |
| 5 = V    |   | 50 = L    |   | 500 = D    |   |            |
| 6 = VI   |   | 60 = LX   |   | 600 = DC   |   |            |
| 7 = VII  |   | 70 = LXX  |   | 700 = DCC  |   |            |
| 8 = VIII |   | 80 = LXXX |   | 800 = DCCC |   |            |
| 9 = IX   |   | 90 = XC   |   | 900 = CM   |   |            |

You can combine the numbers listed above, ordering larger to smaller
numbers left to right. Here are a few examples:

*   407 = CDVII
*   2017 = MMXVII
*   3888 = MMMDCCCLXXXVIII


# Quickstart with Python
  
If you would like to work on this task using the Python programming
language, you can use the following commands to get started quickly.
Since this may install a few `py.test` framework components, it is
recommended to execute these commands in a virtual environment.

```
> git clone https://github.com/blue-yonder/tdd_exercise_roman.git
> cd tdd_exercise
> git checkout python
# You may need to execute the following command twice (sorry)
> python setup.py test
```
 
The `roman` directory is supposed to hold your production code while the
`tests` directory holds the tests. The repository contains a very basic
test file. Running the tests will fail. This constitutes the first step
of your test-driven development cycle. The rest is up to you ;-).
