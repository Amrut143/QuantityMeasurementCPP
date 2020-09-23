#include "../main/model/Feet.h"
#include <gtest/gtest.h>

TEST(FeetTest, given0FeetAnd0FeetWhenCompareShouldReturnTrue) { 
    Feet first_zero_feet(0); 
    Feet second_zero_feet(0);
    ASSERT_EQ(first_zero_feet, second_zero_feet);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}