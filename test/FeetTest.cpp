#include "../main/model/Feet.h"
#include <gtest/gtest.h>

TEST(FeetTest, given_0Feet_And_0Feet_WhenCompare_ShouldReturnTrue) { 
    Feet first_zero_feet(0); 
    Feet second_zero_feet(0);
    ASSERT_EQ(first_zero_feet, second_zero_feet);
}

TEST(FeetTest, givenOneFeetAndNullFeet_ShouldReturnFalse) {
    Feet first_one_feet(1);
    ASSERT_FALSE(first_one_feet == nullptr);
}

TEST(FeetTest, givenSameReference_WhenEqual_ShouldReturnTrue) {
    Feet *first_ref = new Feet(1);
    Feet *second_ref = first_ref;
    ASSERT_EQ(first_ref, second_ref);
}

TEST(FeetTest, givenSameType_WhenEqual_ShouldReturnTrue) {
    Feet first_type(1);
    Feet second_type(1);
    ASSERT_TRUE(first_type == second_type);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}