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
Unit Unit::KG(1, WEIGHT);
Unit Unit::GRAM(0.001, WEIGHT);
Unit Unit::TONNE(1000, WEIGHT);
Unit Unit::CELSIUS(1, TEMPERATURE);
Unit Unit::FAHRENHEIT(1, TEMPERATURE);


double Unit::get_base_value(double value) {
    return (this->base_conversion_factor * value);
}

double Unit::get_temp_base_value(double value) {
     return value * this->base_conversion_factor + 32;
}

bool Unit::operator== (Unit other) const {
    return ((*this) == other);
}