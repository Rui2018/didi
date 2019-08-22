#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "word_anagram.h"

using namespace std;

std::vector<string> dictionary = {"edafa", "eDAfa", "appleee", "dfaae", "dfaeA","zigzag", "egg", "eeafa"};

TEST(Anagram, anagram) {
    vector<char> chars = {'a', 'F', 'd', 'a', 'e'};
    std::vector<string> expected = {"edafa", "eDAfa", "dfaae", "dfaeA"};
    EXPECT_EQ(expected, anagrams(chars, dictionary));
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    auto out = RUN_ALL_TESTS();
    return out;
}

