#include "../main/model/Length.h"
#include <gtest/gtest.h>

TEST(LengthTest, given_0Feet_And_0Feet_WhenCompare_ShouldReturnTrue) { 
    Length first_zero_feet(Unit::FEET, 0.0); 
    Length second_zero_feet(Unit::FEET, 0.0);
    ASSERT_EQ(first_zero_feet, second_zero_feet);
}

TEST(LengthTest, givenOneFeetAndNullFeet_ShouldReturnFalse) {
    Length first_one_feet(Unit::FEET, 1.0);
    ASSERT_FALSE(first_one_feet == nullptr);
}

TEST(LengthTest, givenSameReferenceForFeet_WhenEqual_ShouldReturnTrue) {
    Length *first_ref = new Length(Unit::FEET, 1.0);
    Length *second_ref = first_ref;
    ASSERT_EQ(first_ref, second_ref);
}

TEST(LengthTest, givenSameTypeForFeet_WhenEqual_ShouldReturnTrue) {
    Length first_type(Unit::FEET, 1.0);
    Length second_type(Unit::FEET, 1.0);
    ASSERT_TRUE(first_type == second_type);
}

TEST(LengthTest, givenDifferentFeetValue_whenCompare_ShouldReturnFalse) {
    Length first_feet_value(Unit::FEET, 1.0);
    Length second_feet_value(Unit::FEET, 2.0);
    ASSERT_FALSE(first_feet_value == second_feet_value);
}

TEST(LengthTest, given_0Inch_And_0Inch_WhenCompare_ShouldReturnTrue) { 
    Length first_zero_inch(Unit::INCH, 0.0); 
    Length second_zero_inch(Unit::INCH, 0.0);
    ASSERT_EQ(first_zero_inch, second_zero_inch);
}

TEST(LengthTest, givenOneInchAndNullInch_ShouldReturnFalse) {
    Length first_one_inch(Unit::INCH, 1.0);
    ASSERT_FALSE(first_one_inch == nullptr);
}

TEST(LengthTest, givenSameReferenceForInch_WhenEqual_ShouldReturnTrue) {
    Length *first_ref = new Length(Unit::INCH, 1.0);
    Length *second_ref = first_ref;
    ASSERT_EQ(first_ref, second_ref);
}

TEST(LengthTest, givenSameTypeForInch_WhenEqual_ShouldReturnTrue) {
    Length first_type(Unit::INCH, 1.0);
    Length second_type(Unit::INCH, 1.0);
    ASSERT_TRUE(first_type == second_type);
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}