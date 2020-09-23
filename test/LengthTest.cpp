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

TEST(LengthTest, givenDifferentInchValue_WhenCompare_ShouldReturnFalse) {
    Length first_inch_value(Unit::INCH, 1.0);
    Length second_inch_value(Unit::INCH, 2.0);
    ASSERT_FALSE(first_inch_value == second_inch_value);
}

TEST(LengthTest, given_0Feet_And_0Inch_WhenCompare_ShouldReturnTrue) {
    Length feet_value(Unit::FEET, 0.0);
    Length inch_value(Unit::INCH, 0.0);
    ASSERT_TRUE(feet_value.compare(inch_value));
}

TEST(LengthTest, given_1Feet_And_1Inch_WhenCompare_ShouldReturnFalse) {
    Length feet_value(Unit::FEET, 1.0);
    Length inch_value(Unit::INCH, 1.0);
    ASSERT_FALSE(feet_value.compare(inch_value));
}

TEST(LengthTest, given_1Feet_And_12Inch_WhenCompare_ShouldReturnTrue) {
    Length feet_value(Unit::FEET, 1.0);
    Length inch_value(Unit::INCH, 12.0);
    ASSERT_TRUE(feet_value.compare(inch_value));
}

TEST(LengthTest, given_3Feet_And_1Yard_WhenCompare_ShouldReturnTrue) {
    Length feet_value(Unit::FEET, 3.0);
    Length yard_value(Unit::YARD, 1.0);
    ASSERT_TRUE(feet_value.compare(yard_value));
}

TEST(LengthTest, given_1Feet_And_1Yard_WhenCompare_ShouldReturnFalse) {
    Length feet_value(Unit::FEET, 1.0);
    Length yard_value(Unit::YARD, 1.0);
    ASSERT_FALSE(feet_value.compare(yard_value));
}

TEST(LengthTest, given_1Inch_And_1Yard_WhenCompare_ShouldReturnFalse) {
    Length inch_value(Unit::INCH, 1.0);
    Length yard_value(Unit::YARD, 1.0);
    ASSERT_FALSE(inch_value.compare(yard_value));
}

TEST(LengthTest, given_1Yard_And_36Inch_WhenCompare_ShouldReturnTrue) {
    Length yard_value(Unit::YARD, 1.0);
    Length inch_value(Unit::INCH, 36.0);
    ASSERT_TRUE(yard_value.compare(inch_value));
}

TEST(LengthTest, given_36Inch_And_1Yard_WhenCompare_ShouldReturnTrue) {
    Length inch_value(Unit::INCH, 36.0);
    Length yard_value(Unit::YARD, 1.0);
    ASSERT_TRUE(inch_value.compare(yard_value));
}

TEST(LengthTest, given_1Yard_And_3Feet_WhenCompare_ShouldReturnTrue) {
    Length yard_value(Unit::YARD, 1.0);
    Length inch_value(Unit::FEET, 3.0);
    ASSERT_TRUE(yard_value.compare(inch_value));
}

TEST(LengthTest, given_0Cm_And_0Cm_WhenCompare_ShouldReturnTrue) {
    Length first_cm_value(Unit::CM, 0.0);
    Length second_cm_value(Unit::CM, 0.0);
    ASSERT_TRUE(first_cm_value.compare(second_cm_value));
}

TEST(LengthTest, given_0Cm_And_1Cm_WhenCompare_ShouldReturnFalse) {
    Length first_cm_value(Unit::CM, 0.0);
    Length second_cm_value(Unit::CM, 1.0);
    ASSERT_FALSE(first_cm_value.compare(second_cm_value));
}

TEST(LengthTest, given_1Cm_And_1Inch_WhenCompare_ShouldReturnFalse) {
    Length centimeter_value(Unit::CM, 1.0);
    Length inch_value(Unit::INCH, 1.0);
    ASSERT_FALSE(centimeter_value.compare(inch_value));
}

TEST(LengthTest, given_2Inch_And_5Cm_WhenCompare_ShouldReturnTrue) {
    Length inch_value(Unit::INCH, 2.0);
    Length centimeter_value(Unit::CM, 5.0);
    ASSERT_TRUE(inch_value.compare(centimeter_value));
}

TEST(LengthTest, given_2Inch_And_2Inch_WhenAdded_ShouldReturnResult_In_Inch) {
    Length first_inch(Unit::INCH, 2.0);
    Length second_inch(Unit::INCH, 2.0);
    double result = first_inch.add(second_inch);
    ASSERT_EQ(4.0, result);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}