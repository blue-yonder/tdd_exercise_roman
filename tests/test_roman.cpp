#include <roman/roman.h>

#include <gtest/gtest.h>

/* Use this file to test-drive the implementation of an `arabic_to_roman()`
 * function. Repeat the following steps until you have solved the task:
 *
 * 1. Write a _minimal_ failing test.
 * 2. Pass the test with a _minimal_ change to your production code.
 * 3. Improve both tests and production code with refactorings.
 *
 * Heed the word "minimal". You can fail a test (sometimes by not even compiling)
 * with a trivial thing such as using a function that is not yet declared or
 * defined. A trivial fix to your production code could be to create a simple
 * function stub that does nothing at all.
 *
 * Compile your project and execute the tests with
 *
 *     make && ctest --verbose
 *
 * This test file will fail when it is freshly checked out.
 */

TEST(RomanTest, Dummy) {
    // see https://github.com/google/googletest/blob/master/googletest/docs/Primer.md#basic-assertions
    // for basic assertions or
    // https://github.com/google/googletest/blob/master/googletest/docs/AdvancedGuide.md#exception-assertions
    // for asserting exceptions
    EXPECT_EQ(1, 0);
}
