#include "Unit.h"

Unit::Unit(){}

Unit::Unit(double base_conversion_factor) {
    this->base_conversion_factor = base_conversion_factor;
}

Unit Unit::INCH(1);
Unit Unit::FEET(12);