#include "../main/model/QuantityMeasurement.h"
#include <gtest/gtest.h>

TEST(QuantityMeasurementTest, given_0Feet_And_0Feet_WhenCompare_ShouldReturnTrue) { 
    QuantityMeasurement first_zero_feet(Unit::FEET, 0.0); 
    QuantityMeasurement second_zero_feet(Unit::FEET, 0.0);
    ASSERT_EQ(first_zero_feet, second_zero_feet);
}

TEST(QuantityMeasurementTest, givenOneFeetAndNullFeet_ShouldReturnFalse) {
    QuantityMeasurement first_one_feet(Unit::FEET, 1.0);
    ASSERT_FALSE(first_one_feet == nullptr);
}

TEST(QuantityMeasurementTest, givenSameReferenceForFeet_WhenEqual_ShouldReturnTrue) {
    QuantityMeasurement *first_ref = new QuantityMeasurement(Unit::FEET, 1.0);
    QuantityMeasurement *second_ref = first_ref;
    ASSERT_EQ(first_ref, second_ref);
}

TEST(QuantityMeasurementTest, givenSameTypeForFeet_WhenEqual_ShouldReturnTrue) {
    QuantityMeasurement first_type(Unit::FEET, 1.0);
    QuantityMeasurement second_type(Unit::FEET, 1.0);
    ASSERT_TRUE(first_type == second_type);
}

TEST(QuantityMeasurementTest, givenDifferentFeetValue_whenCompare_ShouldReturnFalse) {
    QuantityMeasurement first_feet_value(Unit::FEET, 1.0);
    QuantityMeasurement second_feet_value(Unit::FEET, 2.0);
    ASSERT_FALSE(first_feet_value == second_feet_value);
}

TEST(QuantityMeasurementTest, given_0Inch_And_0Inch_WhenCompare_ShouldReturnTrue) { 
    QuantityMeasurement first_zero_inch(Unit::INCH, 0.0); 
    QuantityMeasurement second_zero_inch(Unit::INCH, 0.0);
    ASSERT_EQ(first_zero_inch, second_zero_inch);
}

TEST(QuantityMeasurementTest, givenOneInchAndNullInch_ShouldReturnFalse) {
    QuantityMeasurement first_one_inch(Unit::INCH, 1.0);
    ASSERT_FALSE(first_one_inch == nullptr);
}

TEST(QuantityMeasurementTest, givenSameReferenceForInch_WhenEqual_ShouldReturnTrue) {
    QuantityMeasurement *first_ref = new QuantityMeasurement(Unit::INCH, 1.0);
    QuantityMeasurement *second_ref = first_ref;
    ASSERT_EQ(first_ref, second_ref);
}

TEST(QuantityMeasurementTest, givenSameTypeForInch_WhenEqual_ShouldReturnTrue) {
    QuantityMeasurement first_type(Unit::INCH, 1.0);
    QuantityMeasurement second_type(Unit::INCH, 1.0);
    ASSERT_TRUE(first_type == second_type);
}

TEST(QuantityMeasurementTest, givenDifferentInchValue_WhenCompare_ShouldReturnFalse) {
    QuantityMeasurement first_inch_value(Unit::INCH, 1.0);
    QuantityMeasurement second_inch_value(Unit::INCH, 2.0);
    ASSERT_FALSE(first_inch_value == second_inch_value);
}

TEST(QuantityMeasurementTest, given_0Feet_And_0Inch_WhenCompare_ShouldReturnTrue) {
    QuantityMeasurement feet_value(Unit::FEET, 0.0);
    QuantityMeasurement inch_value(Unit::INCH, 0.0);
    ASSERT_TRUE(feet_value.compare(inch_value));
}

TEST(QuantityMeasurementTest, given_1Feet_And_1Inch_WhenCompare_ShouldReturnFalse) {
    QuantityMeasurement feet_value(Unit::FEET, 1.0);
    QuantityMeasurement inch_value(Unit::INCH, 1.0);
    ASSERT_FALSE(feet_value.compare(inch_value));
}

TEST(QuantityMeasurementTest, given_1Feet_And_12Inch_WhenCompare_ShouldReturnTrue) {
    QuantityMeasurement feet_value(Unit::FEET, 1.0);
    QuantityMeasurement inch_value(Unit::INCH, 12.0);
    ASSERT_TRUE(feet_value.compare(inch_value));
}

TEST(QuantityMeasurementTest, given_3Feet_And_1Yard_WhenCompare_ShouldReturnTrue) {
    QuantityMeasurement feet_value(Unit::FEET, 3.0);
    QuantityMeasurement yard_value(Unit::YARD, 1.0);
    ASSERT_TRUE(feet_value.compare(yard_value));
}

TEST(QuantityMeasurementTest, given_1Feet_And_1Yard_WhenCompare_ShouldReturnFalse) {
    QuantityMeasurement feet_value(Unit::FEET, 1.0);
    QuantityMeasurement yard_value(Unit::YARD, 1.0);
    ASSERT_FALSE(feet_value.compare(yard_value));
}

TEST(QuantityMeasurementTest, given_1Inch_And_1Yard_WhenCompare_ShouldReturnFalse) {
    QuantityMeasurement inch_value(Unit::INCH, 1.0);
    QuantityMeasurement yard_value(Unit::YARD, 1.0);
    ASSERT_FALSE(inch_value.compare(yard_value));
}

TEST(QuantityMeasurementTest, given_1Yard_And_36Inch_WhenCompare_ShouldReturnTrue) {
    QuantityMeasurement yard_value(Unit::YARD, 1.0);
    QuantityMeasurement inch_value(Unit::INCH, 36.0);
    ASSERT_TRUE(yard_value.compare(inch_value));
}

TEST(QuantityMeasurementTest, given_36Inch_And_1Yard_WhenCompare_ShouldReturnTrue) {
    QuantityMeasurement inch_value(Unit::INCH, 36.0);
    QuantityMeasurement yard_value(Unit::YARD, 1.0);
    ASSERT_TRUE(inch_value.compare(yard_value));
}

TEST(QuantityMeasurementTest, given_1Yard_And_3Feet_WhenCompare_ShouldReturnTrue) {
    QuantityMeasurement yard_value(Unit::YARD, 1.0);
    QuantityMeasurement inch_value(Unit::FEET, 3.0);
    ASSERT_TRUE(yard_value.compare(inch_value));
}

TEST(QuantityMeasurementTest, given_0Cm_And_0Cm_WhenCompare_ShouldReturnTrue) {
    QuantityMeasurement first_cm_value(Unit::CM, 0.0);
    QuantityMeasurement second_cm_value(Unit::CM, 0.0);
    ASSERT_TRUE(first_cm_value.compare(second_cm_value));
}

TEST(QuantityMeasurementTest, given_0Cm_And_1Cm_WhenCompare_ShouldReturnFalse) {
    QuantityMeasurement first_cm_value(Unit::CM, 0.0);
    QuantityMeasurement second_cm_value(Unit::CM, 1.0);
    ASSERT_FALSE(first_cm_value.compare(second_cm_value));
}

TEST(QuantityMeasurementTest, given_1Cm_And_1Inch_WhenCompare_ShouldReturnFalse) {
    QuantityMeasurement centimeter_value(Unit::CM, 1.0);
    QuantityMeasurement inch_value(Unit::INCH, 1.0);
    ASSERT_FALSE(centimeter_value.compare(inch_value));
}

TEST(QuantityMeasurementTest, given_2Inch_And_5Cm_WhenCompare_ShouldReturnTrue) {
    QuantityMeasurement inch_value(Unit::INCH, 2.0);
    QuantityMeasurement centimeter_value(Unit::CM, 5.0);
    ASSERT_TRUE(inch_value.compare(centimeter_value));
}

TEST(QuantityMeasurementTest, given_2Inch_And_2Inch_WhenAdded_ShouldReturnResult_In_Inch) {
    QuantityMeasurement first_inch(Unit::INCH, 2.0);
    QuantityMeasurement second_inch(Unit::INCH, 2.0);
    double result = first_inch.add(second_inch);
    ASSERT_EQ(4.0, result);
}

TEST(QuantityMeasurementTest, given_1Feet_And_2Inch_WhenAdded_ShouldReturnResult_In_Inch) {
    QuantityMeasurement feet_value(Unit::FEET, 1.0);
    QuantityMeasurement inch_value(Unit::INCH, 2.0);
    double result = feet_value.add(inch_value);
    ASSERT_EQ(14.0, result);
}

TEST(QuantityMeasurementTest, given_1Feet_And_1Feet_WhenAdded_ShouldReturnResult_In_Inch) {
    QuantityMeasurement first_feet(Unit::FEET, 1.0);
    QuantityMeasurement second_feet(Unit::FEET, 1.0);
    double result = first_feet.add(second_feet);
    ASSERT_EQ(24.0, result);
}

TEST(QuantityMeasurementTest, given_2Inch_And_Cm_WhenAdded_ShouldReturnResult_In_Inch) {
    QuantityMeasurement inch_value(Unit::INCH, 2.0);
    QuantityMeasurement centimeter_value(Unit::CM, 2.5);
    double result = inch_value.add(centimeter_value);
    ASSERT_EQ(3.0, result);
}

TEST(QuantityMeasurementTest, given_1Gallon_And_Litre_WhenCompare_ShouldReturnTrue) {
    QuantityMeasurement gallon_value(Unit::GALLON, 1.0);
    QuantityMeasurement litre_value(Unit::LITRE, 3.78);
    ASSERT_TRUE(gallon_value.compare(litre_value));
}

TEST(QuantityMeasurementTest, given_1Litre_And_1000Ml_WhenCompare_ShouldReturnTrue) {
    QuantityMeasurement litre_value(Unit::LITRE, 1.0);
    QuantityMeasurement mililitre_value(Unit::ML, 1000.0);
    ASSERT_TRUE(litre_value.compare(mililitre_value));
}

TEST(QuantityMeasurementTest, given_1Gallon_And_Litre_WhenAdded_ShouldReturnResult_In_Litres) {
    QuantityMeasurement gallon_value(Unit::GALLON, 1.0);
    QuantityMeasurement litre_value(Unit::LITRE, 3.78);
    double result = gallon_value.add(litre_value);
    ASSERT_EQ(7.56, result);
}

TEST(QuantityMeasurementTest, given_1Litre_And_1000Ml_WhenAdded_ShouldReturnResult_In_Litres) {
    QuantityMeasurement litre_value(Unit::LITRE, 1.0);
    QuantityMeasurement mililitre_value(Unit::ML, 1000.0);
    double result = litre_value.add(mililitre_value);
    ASSERT_EQ(2.0, result);
}

TEST(QuantityMeasurementTest, given_1Kg_And_1000Gram_WhenCompare_ShouldReturnTrue) {
    QuantityMeasurement kg_value(Unit::KG, 1.0);
    QuantityMeasurement gram_value(Unit::GRAM, 1000.0);
    ASSERT_TRUE(kg_value.compare(gram_value));
}

TEST(QuantityMeasurementTest, given_1Tonne_And_1000Kg_WhenCompare_ShouldReturnTrue) {
    QuantityMeasurement tonne_value(Unit::TONNE, 1.0);
    QuantityMeasurement kg_value(Unit::KG, 1000.0);
    ASSERT_TRUE(tonne_value.compare(kg_value));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}