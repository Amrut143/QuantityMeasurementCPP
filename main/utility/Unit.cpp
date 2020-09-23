#include "Unit.h"

Unit::Unit(){}

Unit::Unit(double base_conversion_factor) {
    this->base_conversion_factor = base_conversion_factor;
}

Unit Unit::INCH(1);
Unit Unit::FEET(12);
Unit Unit::YARD(36);

double Unit::get_base_value(double value) {
    return (this->base_conversion_factor * value);
}