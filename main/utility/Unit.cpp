#include "Unit.h"

Unit::Unit(){}

Unit::Unit(double base_conversion_factor, TypesOfUnit types_of_unit) {
    this->base_conversion_factor = base_conversion_factor;
    this->types_of_unit = types_of_unit;
}

Unit Unit::INCH(1, LENGTH);
Unit Unit::FEET(12, LENGTH);
Unit Unit::YARD(36, LENGTH);
Unit Unit::CM(0.4, LENGTH);
Unit Unit::GALLON(3.78, VOLUME);
Unit Unit::LITRE(1, VOLUME);
Unit Unit::ML(0.001, VOLUME);

double Unit::get_base_value(double value) {
    return (this->base_conversion_factor * value);
}